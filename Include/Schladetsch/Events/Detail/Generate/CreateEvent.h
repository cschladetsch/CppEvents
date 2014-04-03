// (C) 2009-2011Christian.Schladetsch@Gmail.com

// this file is intended to be included multiple times via BOOST_PP_ITERATE()

#define n BOOST_PP_ITERATION()
    #define CJS_CREATE_EVENT(z, n, unused)
        template <>
        struct CreateEvent<n>
        {
            CJS_TEMPLATE_PARAMS_WITH_DEFAULT(n)
            struct Given
            {
                template <class Ev>
                struct Using : Delegate<n>::Given<BOOST_PP_ENUM_PARAMS(n, T)>
                {
                    typedef int XXX;
                    typedef Ev EventType;
                    EventType const &ev;
                    Using(EventType const &F) : ev(F) { }
                    void Invoke(BOOST_PP_ENUM_BINARY_PARAMS(n, T, t))
                    {
                        ev(BOOST_PP_ENUM_PARAMS(n, t));
                    }
                };
            };
        };
#undef n
