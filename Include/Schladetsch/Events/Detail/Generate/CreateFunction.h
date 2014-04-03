// (C) 2009-2011Christian.Schladetsch@Gmail.com

// this file is intended to be included multiple times via BOOST_PP_ITERATE()

#define n BOOST_PP_ITERATION()
    #define CJS_CREATE_FUNCTION(z, n, unused)
        template <>
        struct CreateFunction<n>
        {
            CJS_TEMPLATE_PARAMS_WITH_DEFAULT(n)
            struct Given : Delegate<n>::Given<BOOST_PP_ENUM_PARAMS(n, T)>
            {
                typedef void (*Function)(BOOST_PP_ENUM_PARAMS(n, T));
                Function fun;
                Given(Function F) : fun(F) { }
                void Invoke(BOOST_PP_ENUM_BINARY_PARAMS(n, T, t))
                {
                    fun(BOOST_PP_ENUM_PARAMS(n, t));
                }
            };
        };
#undef n

//EOF
