
/*
   DO NOT EDIT THIS FILE!

   This file is automatically generated by hpy.tools.autogen.debug.autogen_debug_ctx_init_h
   See also hpy.tools.autogen and hpy/tools/public_api.h

   Run this to regenerate:
       make autogen

*/

DHPy debug_ctx_Module_Create(HPyContext *dctx, HPyModuleDef *def);
DHPy debug_ctx_Dup(HPyContext *dctx, DHPy h);
void debug_ctx_Close(HPyContext *dctx, DHPy h);
DHPy debug_ctx_Long_FromLong(HPyContext *dctx, long value);
DHPy debug_ctx_Long_FromUnsignedLong(HPyContext *dctx, unsigned long value);
DHPy debug_ctx_Long_FromLongLong(HPyContext *dctx, long long v);
DHPy debug_ctx_Long_FromUnsignedLongLong(HPyContext *dctx, unsigned long long v);
DHPy debug_ctx_Long_FromSize_t(HPyContext *dctx, size_t value);
DHPy debug_ctx_Long_FromSsize_t(HPyContext *dctx, HPy_ssize_t value);
long debug_ctx_Long_AsLong(HPyContext *dctx, DHPy h);
unsigned long debug_ctx_Long_AsUnsignedLong(HPyContext *dctx, DHPy h);
unsigned long debug_ctx_Long_AsUnsignedLongMask(HPyContext *dctx, DHPy h);
long long debug_ctx_Long_AsLongLong(HPyContext *dctx, DHPy h);
unsigned long long debug_ctx_Long_AsUnsignedLongLong(HPyContext *dctx, DHPy h);
unsigned long long debug_ctx_Long_AsUnsignedLongLongMask(HPyContext *dctx, DHPy h);
size_t debug_ctx_Long_AsSize_t(HPyContext *dctx, DHPy h);
HPy_ssize_t debug_ctx_Long_AsSsize_t(HPyContext *dctx, DHPy h);
DHPy debug_ctx_Float_FromDouble(HPyContext *dctx, double v);
double debug_ctx_Float_AsDouble(HPyContext *dctx, DHPy h);
DHPy debug_ctx_Bool_FromLong(HPyContext *dctx, long v);
HPy_ssize_t debug_ctx_Length(HPyContext *dctx, DHPy h);
int debug_ctx_Number_Check(HPyContext *dctx, DHPy h);
DHPy debug_ctx_Add(HPyContext *dctx, DHPy h1, DHPy h2);
DHPy debug_ctx_Subtract(HPyContext *dctx, DHPy h1, DHPy h2);
DHPy debug_ctx_Multiply(HPyContext *dctx, DHPy h1, DHPy h2);
DHPy debug_ctx_MatrixMultiply(HPyContext *dctx, DHPy h1, DHPy h2);
DHPy debug_ctx_FloorDivide(HPyContext *dctx, DHPy h1, DHPy h2);
DHPy debug_ctx_TrueDivide(HPyContext *dctx, DHPy h1, DHPy h2);
DHPy debug_ctx_Remainder(HPyContext *dctx, DHPy h1, DHPy h2);
DHPy debug_ctx_Divmod(HPyContext *dctx, DHPy h1, DHPy h2);
DHPy debug_ctx_Power(HPyContext *dctx, DHPy h1, DHPy h2, DHPy h3);
DHPy debug_ctx_Negative(HPyContext *dctx, DHPy h1);
DHPy debug_ctx_Positive(HPyContext *dctx, DHPy h1);
DHPy debug_ctx_Absolute(HPyContext *dctx, DHPy h1);
DHPy debug_ctx_Invert(HPyContext *dctx, DHPy h1);
DHPy debug_ctx_Lshift(HPyContext *dctx, DHPy h1, DHPy h2);
DHPy debug_ctx_Rshift(HPyContext *dctx, DHPy h1, DHPy h2);
DHPy debug_ctx_And(HPyContext *dctx, DHPy h1, DHPy h2);
DHPy debug_ctx_Xor(HPyContext *dctx, DHPy h1, DHPy h2);
DHPy debug_ctx_Or(HPyContext *dctx, DHPy h1, DHPy h2);
DHPy debug_ctx_Index(HPyContext *dctx, DHPy h1);
DHPy debug_ctx_Long(HPyContext *dctx, DHPy h1);
DHPy debug_ctx_Float(HPyContext *dctx, DHPy h1);
DHPy debug_ctx_InPlaceAdd(HPyContext *dctx, DHPy h1, DHPy h2);
DHPy debug_ctx_InPlaceSubtract(HPyContext *dctx, DHPy h1, DHPy h2);
DHPy debug_ctx_InPlaceMultiply(HPyContext *dctx, DHPy h1, DHPy h2);
DHPy debug_ctx_InPlaceMatrixMultiply(HPyContext *dctx, DHPy h1, DHPy h2);
DHPy debug_ctx_InPlaceFloorDivide(HPyContext *dctx, DHPy h1, DHPy h2);
DHPy debug_ctx_InPlaceTrueDivide(HPyContext *dctx, DHPy h1, DHPy h2);
DHPy debug_ctx_InPlaceRemainder(HPyContext *dctx, DHPy h1, DHPy h2);
DHPy debug_ctx_InPlacePower(HPyContext *dctx, DHPy h1, DHPy h2, DHPy h3);
DHPy debug_ctx_InPlaceLshift(HPyContext *dctx, DHPy h1, DHPy h2);
DHPy debug_ctx_InPlaceRshift(HPyContext *dctx, DHPy h1, DHPy h2);
DHPy debug_ctx_InPlaceAnd(HPyContext *dctx, DHPy h1, DHPy h2);
DHPy debug_ctx_InPlaceXor(HPyContext *dctx, DHPy h1, DHPy h2);
DHPy debug_ctx_InPlaceOr(HPyContext *dctx, DHPy h1, DHPy h2);
int debug_ctx_Callable_Check(HPyContext *dctx, DHPy h);
DHPy debug_ctx_CallTupleDict(HPyContext *dctx, DHPy callable, DHPy args, DHPy kw);
void debug_ctx_FatalError(HPyContext *dctx, const char *message);
void debug_ctx_Err_SetString(HPyContext *dctx, DHPy h_type, const char *message);
void debug_ctx_Err_SetObject(HPyContext *dctx, DHPy h_type, DHPy h_value);
int debug_ctx_Err_Occurred(HPyContext *dctx);
DHPy debug_ctx_Err_NoMemory(HPyContext *dctx);
void debug_ctx_Err_Clear(HPyContext *dctx);
DHPy debug_ctx_Err_NewException(HPyContext *dctx, const char *name, DHPy base, DHPy dict);
DHPy debug_ctx_Err_NewExceptionWithDoc(HPyContext *dctx, const char *name, const char *doc, DHPy base, DHPy dict);
int debug_ctx_IsTrue(HPyContext *dctx, DHPy h);
DHPy debug_ctx_Type_FromSpec(HPyContext *dctx, HPyType_Spec *spec, HPyType_SpecParam *params);
DHPy debug_ctx_Type_GenericNew(HPyContext *dctx, DHPy type, DHPy *args, HPy_ssize_t nargs, DHPy kw);
DHPy debug_ctx_GetAttr(HPyContext *dctx, DHPy obj, DHPy name);
DHPy debug_ctx_GetAttr_s(HPyContext *dctx, DHPy obj, const char *name);
int debug_ctx_HasAttr(HPyContext *dctx, DHPy obj, DHPy name);
int debug_ctx_HasAttr_s(HPyContext *dctx, DHPy obj, const char *name);
int debug_ctx_SetAttr(HPyContext *dctx, DHPy obj, DHPy name, DHPy value);
int debug_ctx_SetAttr_s(HPyContext *dctx, DHPy obj, const char *name, DHPy value);
DHPy debug_ctx_GetItem(HPyContext *dctx, DHPy obj, DHPy key);
DHPy debug_ctx_GetItem_i(HPyContext *dctx, DHPy obj, HPy_ssize_t idx);
DHPy debug_ctx_GetItem_s(HPyContext *dctx, DHPy obj, const char *key);
int debug_ctx_SetItem(HPyContext *dctx, DHPy obj, DHPy key, DHPy value);
int debug_ctx_SetItem_i(HPyContext *dctx, DHPy obj, HPy_ssize_t idx, DHPy value);
int debug_ctx_SetItem_s(HPyContext *dctx, DHPy obj, const char *key, DHPy value);
DHPy debug_ctx_Type(HPyContext *dctx, DHPy obj);
int debug_ctx_TypeCheck(HPyContext *dctx, DHPy obj, DHPy type);
int debug_ctx_Is(HPyContext *dctx, DHPy obj, DHPy other);
void *debug_ctx_AsStruct(HPyContext *dctx, DHPy h);
void *debug_ctx_AsStructLegacy(HPyContext *dctx, DHPy h);
DHPy debug_ctx_New(HPyContext *dctx, DHPy h_type, void **data);
DHPy debug_ctx_Repr(HPyContext *dctx, DHPy obj);
DHPy debug_ctx_Str(HPyContext *dctx, DHPy obj);
DHPy debug_ctx_ASCII(HPyContext *dctx, DHPy obj);
DHPy debug_ctx_Bytes(HPyContext *dctx, DHPy obj);
DHPy debug_ctx_RichCompare(HPyContext *dctx, DHPy v, DHPy w, int op);
int debug_ctx_RichCompareBool(HPyContext *dctx, DHPy v, DHPy w, int op);
HPy_hash_t debug_ctx_Hash(HPyContext *dctx, DHPy obj);
int debug_ctx_Bytes_Check(HPyContext *dctx, DHPy h);
HPy_ssize_t debug_ctx_Bytes_Size(HPyContext *dctx, DHPy h);
HPy_ssize_t debug_ctx_Bytes_GET_SIZE(HPyContext *dctx, DHPy h);
char *debug_ctx_Bytes_AsString(HPyContext *dctx, DHPy h);
char *debug_ctx_Bytes_AS_STRING(HPyContext *dctx, DHPy h);
DHPy debug_ctx_Bytes_FromString(HPyContext *dctx, const char *v);
DHPy debug_ctx_Bytes_FromStringAndSize(HPyContext *dctx, const char *v, HPy_ssize_t len);
DHPy debug_ctx_Unicode_FromString(HPyContext *dctx, const char *utf8);
int debug_ctx_Unicode_Check(HPyContext *dctx, DHPy h);
DHPy debug_ctx_Unicode_AsUTF8String(HPyContext *dctx, DHPy h);
DHPy debug_ctx_Unicode_FromWideChar(HPyContext *dctx, const wchar_t *w, HPy_ssize_t size);
int debug_ctx_List_Check(HPyContext *dctx, DHPy h);
DHPy debug_ctx_List_New(HPyContext *dctx, HPy_ssize_t len);
int debug_ctx_List_Append(HPyContext *dctx, DHPy h_list, DHPy h_item);
int debug_ctx_Dict_Check(HPyContext *dctx, DHPy h);
DHPy debug_ctx_Dict_New(HPyContext *dctx);
int debug_ctx_Tuple_Check(HPyContext *dctx, DHPy h);
DHPy debug_ctx_Tuple_FromArray(HPyContext *dctx, DHPy items[], HPy_ssize_t n);
DHPy debug_ctx_Import_ImportModule(HPyContext *dctx, const char *name);
DHPy debug_ctx_FromPyObject(HPyContext *dctx, cpy_PyObject *obj);
cpy_PyObject *debug_ctx_AsPyObject(HPyContext *dctx, DHPy h);
void debug_ctx_CallRealFunctionFromTrampoline(HPyContext *dctx, HPyFunc_Signature sig, void *func, void *args);
void debug_ctx_CallDestroyAndThenDealloc(HPyContext *dctx, void *func, cpy_PyObject *self);
HPyListBuilder debug_ctx_ListBuilder_New(HPyContext *dctx, HPy_ssize_t initial_size);
void debug_ctx_ListBuilder_Set(HPyContext *dctx, HPyListBuilder builder, HPy_ssize_t index, DHPy h_item);
DHPy debug_ctx_ListBuilder_Build(HPyContext *dctx, HPyListBuilder builder);
void debug_ctx_ListBuilder_Cancel(HPyContext *dctx, HPyListBuilder builder);
HPyUnicodeBuilder debug_ctx_UnicodeBuilder_New(HPyContext *dctx, HPy_ssize_t size);
int debug_ctx_UnicodeBuilder_Add(HPyContext *dctx, HPyUnicodeBuilder builder, const char *s);
DHPy debug_ctx_UnicodeBuilder_Build(HPyContext *dctx, HPyUnicodeBuilder builder);
void debug_ctx_UnicodeBuilder_Cancel(HPyContext *dctx, HPyUnicodeBuilder builder);
HPyTupleBuilder debug_ctx_TupleBuilder_New(HPyContext *dctx, HPy_ssize_t initial_size);
void debug_ctx_TupleBuilder_Set(HPyContext *dctx, HPyTupleBuilder builder, HPy_ssize_t index, DHPy h_item);
DHPy debug_ctx_TupleBuilder_Build(HPyContext *dctx, HPyTupleBuilder builder);
void debug_ctx_TupleBuilder_Cancel(HPyContext *dctx, HPyTupleBuilder builder);
HPyTracker debug_ctx_Tracker_New(HPyContext *dctx, HPy_ssize_t size);
int debug_ctx_Tracker_Add(HPyContext *dctx, HPyTracker ht, DHPy h);
void debug_ctx_Tracker_ForgetAll(HPyContext *dctx, HPyTracker ht);
void debug_ctx_Tracker_Close(HPyContext *dctx, HPyTracker ht);
void debug_ctx_Dump(HPyContext *dctx, DHPy h);

static inline void debug_ctx_init_fields(HPyContext *dctx, HPyContext *uctx)
{
    dctx->h_None = DHPy_wrap(dctx, uctx->h_None);
    dctx->h_True = DHPy_wrap(dctx, uctx->h_True);
    dctx->h_False = DHPy_wrap(dctx, uctx->h_False);
    dctx->h_NotImplemented = DHPy_wrap(dctx, uctx->h_NotImplemented);
    dctx->h_Ellipsis = DHPy_wrap(dctx, uctx->h_Ellipsis);
    dctx->h_BaseException = DHPy_wrap(dctx, uctx->h_BaseException);
    dctx->h_Exception = DHPy_wrap(dctx, uctx->h_Exception);
    dctx->h_StopAsyncIteration = DHPy_wrap(dctx, uctx->h_StopAsyncIteration);
    dctx->h_StopIteration = DHPy_wrap(dctx, uctx->h_StopIteration);
    dctx->h_GeneratorExit = DHPy_wrap(dctx, uctx->h_GeneratorExit);
    dctx->h_ArithmeticError = DHPy_wrap(dctx, uctx->h_ArithmeticError);
    dctx->h_LookupError = DHPy_wrap(dctx, uctx->h_LookupError);
    dctx->h_AssertionError = DHPy_wrap(dctx, uctx->h_AssertionError);
    dctx->h_AttributeError = DHPy_wrap(dctx, uctx->h_AttributeError);
    dctx->h_BufferError = DHPy_wrap(dctx, uctx->h_BufferError);
    dctx->h_EOFError = DHPy_wrap(dctx, uctx->h_EOFError);
    dctx->h_FloatingPointError = DHPy_wrap(dctx, uctx->h_FloatingPointError);
    dctx->h_OSError = DHPy_wrap(dctx, uctx->h_OSError);
    dctx->h_ImportError = DHPy_wrap(dctx, uctx->h_ImportError);
    dctx->h_ModuleNotFoundError = DHPy_wrap(dctx, uctx->h_ModuleNotFoundError);
    dctx->h_IndexError = DHPy_wrap(dctx, uctx->h_IndexError);
    dctx->h_KeyError = DHPy_wrap(dctx, uctx->h_KeyError);
    dctx->h_KeyboardInterrupt = DHPy_wrap(dctx, uctx->h_KeyboardInterrupt);
    dctx->h_MemoryError = DHPy_wrap(dctx, uctx->h_MemoryError);
    dctx->h_NameError = DHPy_wrap(dctx, uctx->h_NameError);
    dctx->h_OverflowError = DHPy_wrap(dctx, uctx->h_OverflowError);
    dctx->h_RuntimeError = DHPy_wrap(dctx, uctx->h_RuntimeError);
    dctx->h_RecursionError = DHPy_wrap(dctx, uctx->h_RecursionError);
    dctx->h_NotImplementedError = DHPy_wrap(dctx, uctx->h_NotImplementedError);
    dctx->h_SyntaxError = DHPy_wrap(dctx, uctx->h_SyntaxError);
    dctx->h_IndentationError = DHPy_wrap(dctx, uctx->h_IndentationError);
    dctx->h_TabError = DHPy_wrap(dctx, uctx->h_TabError);
    dctx->h_ReferenceError = DHPy_wrap(dctx, uctx->h_ReferenceError);
    dctx->h_SystemError = DHPy_wrap(dctx, uctx->h_SystemError);
    dctx->h_SystemExit = DHPy_wrap(dctx, uctx->h_SystemExit);
    dctx->h_TypeError = DHPy_wrap(dctx, uctx->h_TypeError);
    dctx->h_UnboundLocalError = DHPy_wrap(dctx, uctx->h_UnboundLocalError);
    dctx->h_UnicodeError = DHPy_wrap(dctx, uctx->h_UnicodeError);
    dctx->h_UnicodeEncodeError = DHPy_wrap(dctx, uctx->h_UnicodeEncodeError);
    dctx->h_UnicodeDecodeError = DHPy_wrap(dctx, uctx->h_UnicodeDecodeError);
    dctx->h_UnicodeTranslateError = DHPy_wrap(dctx, uctx->h_UnicodeTranslateError);
    dctx->h_ValueError = DHPy_wrap(dctx, uctx->h_ValueError);
    dctx->h_ZeroDivisionError = DHPy_wrap(dctx, uctx->h_ZeroDivisionError);
    dctx->h_BlockingIOError = DHPy_wrap(dctx, uctx->h_BlockingIOError);
    dctx->h_BrokenPipeError = DHPy_wrap(dctx, uctx->h_BrokenPipeError);
    dctx->h_ChildProcessError = DHPy_wrap(dctx, uctx->h_ChildProcessError);
    dctx->h_ConnectionError = DHPy_wrap(dctx, uctx->h_ConnectionError);
    dctx->h_ConnectionAbortedError = DHPy_wrap(dctx, uctx->h_ConnectionAbortedError);
    dctx->h_ConnectionRefusedError = DHPy_wrap(dctx, uctx->h_ConnectionRefusedError);
    dctx->h_ConnectionResetError = DHPy_wrap(dctx, uctx->h_ConnectionResetError);
    dctx->h_FileExistsError = DHPy_wrap(dctx, uctx->h_FileExistsError);
    dctx->h_FileNotFoundError = DHPy_wrap(dctx, uctx->h_FileNotFoundError);
    dctx->h_InterruptedError = DHPy_wrap(dctx, uctx->h_InterruptedError);
    dctx->h_IsADirectoryError = DHPy_wrap(dctx, uctx->h_IsADirectoryError);
    dctx->h_NotADirectoryError = DHPy_wrap(dctx, uctx->h_NotADirectoryError);
    dctx->h_PermissionError = DHPy_wrap(dctx, uctx->h_PermissionError);
    dctx->h_ProcessLookupError = DHPy_wrap(dctx, uctx->h_ProcessLookupError);
    dctx->h_TimeoutError = DHPy_wrap(dctx, uctx->h_TimeoutError);
    dctx->h_Warning = DHPy_wrap(dctx, uctx->h_Warning);
    dctx->h_UserWarning = DHPy_wrap(dctx, uctx->h_UserWarning);
    dctx->h_DeprecationWarning = DHPy_wrap(dctx, uctx->h_DeprecationWarning);
    dctx->h_PendingDeprecationWarning = DHPy_wrap(dctx, uctx->h_PendingDeprecationWarning);
    dctx->h_SyntaxWarning = DHPy_wrap(dctx, uctx->h_SyntaxWarning);
    dctx->h_RuntimeWarning = DHPy_wrap(dctx, uctx->h_RuntimeWarning);
    dctx->h_FutureWarning = DHPy_wrap(dctx, uctx->h_FutureWarning);
    dctx->h_ImportWarning = DHPy_wrap(dctx, uctx->h_ImportWarning);
    dctx->h_UnicodeWarning = DHPy_wrap(dctx, uctx->h_UnicodeWarning);
    dctx->h_BytesWarning = DHPy_wrap(dctx, uctx->h_BytesWarning);
    dctx->h_ResourceWarning = DHPy_wrap(dctx, uctx->h_ResourceWarning);
    dctx->h_BaseObjectType = DHPy_wrap(dctx, uctx->h_BaseObjectType);
    dctx->h_TypeType = DHPy_wrap(dctx, uctx->h_TypeType);
    dctx->h_LongType = DHPy_wrap(dctx, uctx->h_LongType);
    dctx->h_UnicodeType = DHPy_wrap(dctx, uctx->h_UnicodeType);
    dctx->h_TupleType = DHPy_wrap(dctx, uctx->h_TupleType);
    dctx->h_ListType = DHPy_wrap(dctx, uctx->h_ListType);
    dctx->ctx_Module_Create = &debug_ctx_Module_Create;
    dctx->ctx_Dup = &debug_ctx_Dup;
    dctx->ctx_Close = &debug_ctx_Close;
    dctx->ctx_Long_FromLong = &debug_ctx_Long_FromLong;
    dctx->ctx_Long_FromUnsignedLong = &debug_ctx_Long_FromUnsignedLong;
    dctx->ctx_Long_FromLongLong = &debug_ctx_Long_FromLongLong;
    dctx->ctx_Long_FromUnsignedLongLong = &debug_ctx_Long_FromUnsignedLongLong;
    dctx->ctx_Long_FromSize_t = &debug_ctx_Long_FromSize_t;
    dctx->ctx_Long_FromSsize_t = &debug_ctx_Long_FromSsize_t;
    dctx->ctx_Long_AsLong = &debug_ctx_Long_AsLong;
    dctx->ctx_Long_AsUnsignedLong = &debug_ctx_Long_AsUnsignedLong;
    dctx->ctx_Long_AsUnsignedLongMask = &debug_ctx_Long_AsUnsignedLongMask;
    dctx->ctx_Long_AsLongLong = &debug_ctx_Long_AsLongLong;
    dctx->ctx_Long_AsUnsignedLongLong = &debug_ctx_Long_AsUnsignedLongLong;
    dctx->ctx_Long_AsUnsignedLongLongMask = &debug_ctx_Long_AsUnsignedLongLongMask;
    dctx->ctx_Long_AsSize_t = &debug_ctx_Long_AsSize_t;
    dctx->ctx_Long_AsSsize_t = &debug_ctx_Long_AsSsize_t;
    dctx->ctx_Float_FromDouble = &debug_ctx_Float_FromDouble;
    dctx->ctx_Float_AsDouble = &debug_ctx_Float_AsDouble;
    dctx->ctx_Bool_FromLong = &debug_ctx_Bool_FromLong;
    dctx->ctx_Length = &debug_ctx_Length;
    dctx->ctx_Number_Check = &debug_ctx_Number_Check;
    dctx->ctx_Add = &debug_ctx_Add;
    dctx->ctx_Subtract = &debug_ctx_Subtract;
    dctx->ctx_Multiply = &debug_ctx_Multiply;
    dctx->ctx_MatrixMultiply = &debug_ctx_MatrixMultiply;
    dctx->ctx_FloorDivide = &debug_ctx_FloorDivide;
    dctx->ctx_TrueDivide = &debug_ctx_TrueDivide;
    dctx->ctx_Remainder = &debug_ctx_Remainder;
    dctx->ctx_Divmod = &debug_ctx_Divmod;
    dctx->ctx_Power = &debug_ctx_Power;
    dctx->ctx_Negative = &debug_ctx_Negative;
    dctx->ctx_Positive = &debug_ctx_Positive;
    dctx->ctx_Absolute = &debug_ctx_Absolute;
    dctx->ctx_Invert = &debug_ctx_Invert;
    dctx->ctx_Lshift = &debug_ctx_Lshift;
    dctx->ctx_Rshift = &debug_ctx_Rshift;
    dctx->ctx_And = &debug_ctx_And;
    dctx->ctx_Xor = &debug_ctx_Xor;
    dctx->ctx_Or = &debug_ctx_Or;
    dctx->ctx_Index = &debug_ctx_Index;
    dctx->ctx_Long = &debug_ctx_Long;
    dctx->ctx_Float = &debug_ctx_Float;
    dctx->ctx_InPlaceAdd = &debug_ctx_InPlaceAdd;
    dctx->ctx_InPlaceSubtract = &debug_ctx_InPlaceSubtract;
    dctx->ctx_InPlaceMultiply = &debug_ctx_InPlaceMultiply;
    dctx->ctx_InPlaceMatrixMultiply = &debug_ctx_InPlaceMatrixMultiply;
    dctx->ctx_InPlaceFloorDivide = &debug_ctx_InPlaceFloorDivide;
    dctx->ctx_InPlaceTrueDivide = &debug_ctx_InPlaceTrueDivide;
    dctx->ctx_InPlaceRemainder = &debug_ctx_InPlaceRemainder;
    dctx->ctx_InPlacePower = &debug_ctx_InPlacePower;
    dctx->ctx_InPlaceLshift = &debug_ctx_InPlaceLshift;
    dctx->ctx_InPlaceRshift = &debug_ctx_InPlaceRshift;
    dctx->ctx_InPlaceAnd = &debug_ctx_InPlaceAnd;
    dctx->ctx_InPlaceXor = &debug_ctx_InPlaceXor;
    dctx->ctx_InPlaceOr = &debug_ctx_InPlaceOr;
    dctx->ctx_Callable_Check = &debug_ctx_Callable_Check;
    dctx->ctx_CallTupleDict = &debug_ctx_CallTupleDict;
    dctx->ctx_FatalError = &debug_ctx_FatalError;
    dctx->ctx_Err_SetString = &debug_ctx_Err_SetString;
    dctx->ctx_Err_SetObject = &debug_ctx_Err_SetObject;
    dctx->ctx_Err_Occurred = &debug_ctx_Err_Occurred;
    dctx->ctx_Err_NoMemory = &debug_ctx_Err_NoMemory;
    dctx->ctx_Err_Clear = &debug_ctx_Err_Clear;
    dctx->ctx_Err_NewException = &debug_ctx_Err_NewException;
    dctx->ctx_Err_NewExceptionWithDoc = &debug_ctx_Err_NewExceptionWithDoc;
    dctx->ctx_IsTrue = &debug_ctx_IsTrue;
    dctx->ctx_Type_FromSpec = &debug_ctx_Type_FromSpec;
    dctx->ctx_Type_GenericNew = &debug_ctx_Type_GenericNew;
    dctx->ctx_GetAttr = &debug_ctx_GetAttr;
    dctx->ctx_GetAttr_s = &debug_ctx_GetAttr_s;
    dctx->ctx_HasAttr = &debug_ctx_HasAttr;
    dctx->ctx_HasAttr_s = &debug_ctx_HasAttr_s;
    dctx->ctx_SetAttr = &debug_ctx_SetAttr;
    dctx->ctx_SetAttr_s = &debug_ctx_SetAttr_s;
    dctx->ctx_GetItem = &debug_ctx_GetItem;
    dctx->ctx_GetItem_i = &debug_ctx_GetItem_i;
    dctx->ctx_GetItem_s = &debug_ctx_GetItem_s;
    dctx->ctx_SetItem = &debug_ctx_SetItem;
    dctx->ctx_SetItem_i = &debug_ctx_SetItem_i;
    dctx->ctx_SetItem_s = &debug_ctx_SetItem_s;
    dctx->ctx_Type = &debug_ctx_Type;
    dctx->ctx_TypeCheck = &debug_ctx_TypeCheck;
    dctx->ctx_Is = &debug_ctx_Is;
    dctx->ctx_AsStruct = &debug_ctx_AsStruct;
    dctx->ctx_AsStructLegacy = &debug_ctx_AsStructLegacy;
    dctx->ctx_New = &debug_ctx_New;
    dctx->ctx_Repr = &debug_ctx_Repr;
    dctx->ctx_Str = &debug_ctx_Str;
    dctx->ctx_ASCII = &debug_ctx_ASCII;
    dctx->ctx_Bytes = &debug_ctx_Bytes;
    dctx->ctx_RichCompare = &debug_ctx_RichCompare;
    dctx->ctx_RichCompareBool = &debug_ctx_RichCompareBool;
    dctx->ctx_Hash = &debug_ctx_Hash;
    dctx->ctx_Bytes_Check = &debug_ctx_Bytes_Check;
    dctx->ctx_Bytes_Size = &debug_ctx_Bytes_Size;
    dctx->ctx_Bytes_GET_SIZE = &debug_ctx_Bytes_GET_SIZE;
    dctx->ctx_Bytes_AsString = &debug_ctx_Bytes_AsString;
    dctx->ctx_Bytes_AS_STRING = &debug_ctx_Bytes_AS_STRING;
    dctx->ctx_Bytes_FromString = &debug_ctx_Bytes_FromString;
    dctx->ctx_Bytes_FromStringAndSize = &debug_ctx_Bytes_FromStringAndSize;
    dctx->ctx_Unicode_FromString = &debug_ctx_Unicode_FromString;
    dctx->ctx_Unicode_Check = &debug_ctx_Unicode_Check;
    dctx->ctx_Unicode_AsUTF8String = &debug_ctx_Unicode_AsUTF8String;
    dctx->ctx_Unicode_FromWideChar = &debug_ctx_Unicode_FromWideChar;
    dctx->ctx_List_Check = &debug_ctx_List_Check;
    dctx->ctx_List_New = &debug_ctx_List_New;
    dctx->ctx_List_Append = &debug_ctx_List_Append;
    dctx->ctx_Dict_Check = &debug_ctx_Dict_Check;
    dctx->ctx_Dict_New = &debug_ctx_Dict_New;
    dctx->ctx_Tuple_Check = &debug_ctx_Tuple_Check;
    dctx->ctx_Tuple_FromArray = &debug_ctx_Tuple_FromArray;
    dctx->ctx_Import_ImportModule = &debug_ctx_Import_ImportModule;
    dctx->ctx_FromPyObject = &debug_ctx_FromPyObject;
    dctx->ctx_AsPyObject = &debug_ctx_AsPyObject;
    dctx->ctx_CallRealFunctionFromTrampoline = &debug_ctx_CallRealFunctionFromTrampoline;
    dctx->ctx_CallDestroyAndThenDealloc = &debug_ctx_CallDestroyAndThenDealloc;
    dctx->ctx_ListBuilder_New = &debug_ctx_ListBuilder_New;
    dctx->ctx_ListBuilder_Set = &debug_ctx_ListBuilder_Set;
    dctx->ctx_ListBuilder_Build = &debug_ctx_ListBuilder_Build;
    dctx->ctx_ListBuilder_Cancel = &debug_ctx_ListBuilder_Cancel;
    dctx->ctx_UnicodeBuilder_New = &debug_ctx_UnicodeBuilder_New;
    dctx->ctx_UnicodeBuilder_Add = &debug_ctx_UnicodeBuilder_Add;
    dctx->ctx_UnicodeBuilder_Build = &debug_ctx_UnicodeBuilder_Build;
    dctx->ctx_UnicodeBuilder_Cancel = &debug_ctx_UnicodeBuilder_Cancel;
    dctx->ctx_TupleBuilder_New = &debug_ctx_TupleBuilder_New;
    dctx->ctx_TupleBuilder_Set = &debug_ctx_TupleBuilder_Set;
    dctx->ctx_TupleBuilder_Build = &debug_ctx_TupleBuilder_Build;
    dctx->ctx_TupleBuilder_Cancel = &debug_ctx_TupleBuilder_Cancel;
    dctx->ctx_Tracker_New = &debug_ctx_Tracker_New;
    dctx->ctx_Tracker_Add = &debug_ctx_Tracker_Add;
    dctx->ctx_Tracker_ForgetAll = &debug_ctx_Tracker_ForgetAll;
    dctx->ctx_Tracker_Close = &debug_ctx_Tracker_Close;
    dctx->ctx_Dump = &debug_ctx_Dump;
}
