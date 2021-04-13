from .support import HPyTest

class TestString(HPyTest):
    def test_unicode_builder(self):
        mod = self.make_module("""
            HPyDef_METH(f, "f", f_impl, HPyFunc_O)
            static HPy f_impl(HPyContext *ctx, HPy h_self, HPy h_arg)
            {
                HPyUnicodeBuilder builder = HPyUnicodeBuilder_New(ctx, 0);
                if(HPy_IsNull(builder)) {
                    HPyErr_SetString(ctx, ctx->h_RuntimeError, "Could not create HPyUnicodeBuilder");
                    return HPy_NULL;
                }
                HPyUnicodeBuilder_Add(ctx, builder, "hello ");
                char *arg = HPyBytes_AsString(ctx, HPyUnicode_AsUTF8String(ctx, h_arg));
                HPyUnicodeBuilder_Add(ctx, builder, arg);
                HPyUnicodeBuilder_Add(ctx, builder, "!");
                HPy h_string = HPyUnicodeBuilder_Build(ctx, builder);
                HPy_Close(ctx, h_arg);
                return h_string;
            }
            @EXPORT(f)
            @INIT
        """)
        assert mod.f("world") == "hello world!"
