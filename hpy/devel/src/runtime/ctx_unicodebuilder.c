#include <stddef.h>
#include <string.h>
#include <Python.h>
#include "hpy.h"

#include <stdio.h>

#ifdef HPY_UNIVERSAL_ABI
   // for _h2py and _py2h
#  include "handles.h"
#endif

static const Py_ssize_t HPYUNICODEBUILDER_INITIAL_CAPACITY = 1024;

typedef struct {
    Py_ssize_t capacity;  // allocated handles
    Py_ssize_t length;
    char *buf;
} _PyUnicodeBuilder_s;

#ifdef HPY_UNIVERSAL_ABI
static inline _PyUnicodeBuilder_s *_hb2pb(HPyUnicodeBuilder ht) {
    return (_PyUnicodeBuilder_s *) (ht)._i;
}
static inline HPyUnicodeBuilder _pb2hb(_PyUnicodeBuilder_s *bp) {
    return (HPyUnicodeBuilder) {(HPy_ssize_t) (bp)};
}
#else
static inline _PyUnicodeBuilder_s *_hb2pb(HPyUnicodeBuilder ht) {
    return (_PyUnicodeBuilder_s *) (ht)._o;
}
static inline HPyUnicodeBuilder _pb2hb(_PyUnicodeBuilder_s *bp) {
    return (HPyUnicodeBuilder) {(void *) (bp)};
}
#endif

_HPy_HIDDEN HPyUnicodeBuilder
ctx_UnicodeBuilder_New(HPyContext *ctx, HPy_ssize_t capacity)
{
    _PyUnicodeBuilder_s *bp;
    if (capacity == 0) {
        // Or should we raise a ValueError?
        capacity = HPYUNICODEBUILDER_INITIAL_CAPACITY;
    }
    capacity++; // always reserve space for the trailing 0
    fprintf(stderr, "\n\nNEW: allocating %ld bytes\n", capacity);

    bp = malloc(sizeof(_PyUnicodeBuilder_s));
    if (bp == NULL) {
        fprintf(stderr, "NO MEM 1\n");
        HPyErr_NoMemory(ctx);
        return _pb2hb(0);
    }

    bp->buf = malloc(capacity);
    if (bp == NULL) {
        fprintf(stderr, "NO MEM 2\n");
        free(bp);
        HPyErr_NoMemory(ctx);
        return _pb2hb(0);
    }

    bp->capacity = capacity;
    bp->length = 0;
    return _pb2hb(bp);
}

_HPy_HIDDEN int
ctx_UnicodeBuilder_Add(HPyContext *ctx, HPyUnicodeBuilder builder, const char *s)
{
    _PyUnicodeBuilder_s *bp = _hb2pb(builder);
    fprintf(stderr, "ADD to %p\n", bp);
     // TODO: Should we trust the user to submit a 0 terminated string?
    // The alternative would be to use strnlen and have a maximum allowed length for s
    int len = strlen(s);
    // if(bp->length + length >= bp->capacity) {
    //     // TODO: Have a better reallocation strategy
    //     int new_size = bp->capacity + length + 1;
    //     bp->buf = realloc(bp->buf, new_size);
    //     if(bp->buf == NULL) {
    //         fprintf(stderr, "NO MEM!!!!\n");
    //         free(bp);
    //         HPyErr_NoMemory(ctx);
    //         return -1;
    //     }
    // }
    fprintf(stderr, "ADD: new: '%s', s so far: '%s'\n", s, bp->buf);
    fprintf(stderr, "ADD: adding %d bytes from %zd, advancing length to %zd\n", len, bp->length, bp->length + len);
    strncpy((bp->buf + bp->length), s, len);
    bp->length += len;
    return 0;
}

_HPy_HIDDEN HPy
ctx_UnicodeBuilder_Build(HPyContext *ctx, HPyUnicodeBuilder builder)
{
    _PyUnicodeBuilder_s *bp = _hb2pb(builder);
    fprintf(stderr, "BUILd: %s (%zd)\n", bp->buf, bp->length);
    HPy h_result = HPyUnicode_FromString(ctx, bp->buf);
    free(bp->buf);
    free(bp);
    return h_result;
}

_HPy_HIDDEN void
ctx_UnicodeBuilder_Cancel(HPyContext *ctx, HPyUnicodeBuilder builder)
{
    _PyUnicodeBuilder_s *bp = _hb2pb(builder);
    free(bp->buf);
    free(bp);
}
