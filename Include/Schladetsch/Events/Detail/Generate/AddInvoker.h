// (C) 2009-2011 Christian.Schladetsch@Gmail.com

// this file is intended to be included multiple times via BOOST_PP_ITERATE()

#define n BOOST_PP_ITERATION()
    #define CJS_ADD_INVOKER(z, n, unused)
        template <>
        struct AddInvoker<n> : InvokerBase<n>
        {
            template <BOOST_PP_ENUM_PARAMS(SCHLADETSCH_EVENTS_ARITY_MAX, class T)>
            struct Given
            {
                typedef typename SinksType<BOOST_PP_ENUM_PARAMS(n, T)>::Type Sinks;
                Sinks sinks;
                void operator()(BOOST_PP_ENUM_BINARY_PARAMS(n, T, t)) const
                {
                    typename Sinks::const_iterator iter = sinks.begin(), end = sinks.end();
                    for (; iter != end; ++iter)
                    {
                        iter->second->Invoke(BOOST_PP_ENUM_PARAMS(n, t));
                    }
                }
            };
        };
    #undef CJS_ADD_INVOKER
#undef n

//EOF
