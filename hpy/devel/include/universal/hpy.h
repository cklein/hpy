#ifndef HPY_UNIVERSAL_H
#define HPY_UNIVERSAL_H

#include <stdlib.h>
#include <stdint.h>
#include <stdarg.h>

#ifdef __GNUC__
#define _HPy_HIDDEN  __attribute__((visibility("hidden")))
#else
#define _HPy_HIDDEN
#endif /* __GNUC__ */

#if defined(__clang__) || \
    (defined(__GNUC__) && \
     ((__GNUC__ >= 3) || \
      (__GNUC__ == 2) && (__GNUC_MINOR__ >= 5)))
#  define _HPy_NO_RETURN __attribute__((__noreturn__))
#elif defined(_MSC_VER)
#  define _HPy_NO_RETURN __declspec(noreturn)
#else
#  define _HPy_NO_RETURN
#endif

#define HPyAPI_RUNTIME_FUNC(restype) _HPy_HIDDEN restype

/* HPy types */
typedef intptr_t HPy_ssize_t;
typedef intptr_t HPy_hash_t;

/* The following types, when compiled with the present universal-mode header,
   are each just a pointer-sized integer.  What this integer (or pointer)
   means is up to the implementation.  For example, on both CPython and PyPy,
   the HPy structure contains an index in a global array. */
typedef struct _HPy_s { HPy_ssize_t _i; } HPy;
typedef struct { HPy_ssize_t _lst; } HPyListBuilder;
typedef struct { HPy_ssize_t _lst; } HPyStringBuilder;
typedef struct { HPy_ssize_t _tup; } HPyTupleBuilder;
typedef struct { HPy_ssize_t _i; } HPyTracker;

typedef struct _HPyContext_s HPyContext;

/* compatibility CPython types */
#include "common/cpy_types.h"


/* misc stuff, which should probably go in its own header */
#define HPy_NULL ((HPy){0})
#define HPy_IsNull(x) ((x)._i == 0)

// XXX: we need to decide whether these are part of the official API or not,
// and maybe introduce a better naming convetion. For now, they are needed for
// ujson
static inline HPy HPy_FromVoidP(void *p) { return (HPy){(HPy_ssize_t)p}; }
static inline void* HPy_AsVoidP(HPy h) { return (void*)h._i; }

// include runtime functions
#include "common/macros.h"

#include "common/hpyfunc.h"
#include "common/hpydef.h"
#include "common/hpytype.h"
#include "common/hpymodule.h"

#include "common/runtime/argparse.h"
#include "common/runtime/helpers.h"

#include "autogen_ctx.h"
#include "autogen_trampolines.h"

/* manual trampolines */

static inline HPy _HPy_New(HPyContext *ctx, HPy h_type, void **data) {
    /* Performance hack: the autogenerated version of this trampoline would
       simply forward data to ctx_New.

       Suppose you call HPy_New this way:
           PointObject *point;
           HPy h = HPy_New(ctx, cls, &point);

       If you pass "data" to ctx->New, the C compiler must assume that anybody
       could write a different value at any time into this local variable
       because a pointer to it escaped. With this hack, it's no longer the
       case: what escaped is the address of data_result instead and that local
       variable disappears since this function is likely inlined.

       See https://github.com/pyhandle/hpy/pull/22#pullrequestreview-413365845
    */
    void *data_result;
    HPy h = ctx->ctx_New(ctx, h_type, &data_result);
    *data = data_result;
    return h;
}

static inline _HPy_NO_RETURN void
HPy_FatalError(HPyContext *ctx, const char *message) {
    ctx->ctx_FatalError(ctx, message);
    /* note: the following abort() is unreachable, but needed because the
       _HPy_NO_RETURN doesn't seem to be sufficient.  I think that what
       occurs is that this function is inlined, after which gcc forgets
       that it couldn't return.  Having abort() inlined fixes that. */
    abort();
}


#endif /* HPY_UNIVERSAL_H */
