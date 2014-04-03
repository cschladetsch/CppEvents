// (C) 2009-2011Christian.Schladetsch@Gmail.com

// this file is intended to be included multiple times via BOOST_PP_ITERATE()

#define n BOOST_PP_ITERATION()
    #define CJS_CREATE_METHOD(z, n, unused)
        template <>
        struct CreateMethod<n,false>
        {
            CJS_TEMPLATE_PARAMS_WITH_DEFAULT(n)
            struct Given
            {
                template <class Class>
                struct Type : Delegate<n>::Given<BOOST_PP_ENUM_PARAMS(n,T)>
                {
                    typedef void (Class::*Method)(BOOST_PP_ENUM_PARAMS(n,T));
                    typedef Class *Servant;
                    Servant object;
                    Method method;
                    Type(Servant Q, Method M) : object(Q), method(M) { }
                    void Invoke(BOOST_PP_ENUM_BINARY_PARAMS(n, T, t))
                    {
                        (object->*method)(BOOST_PP_ENUM_PARAMS(n,t));
                    }
                };
            };
        };

        template <>
        struct CreateMethod<n, true>
        {
            CJS_TEMPLATE_PARAMS_WITH_DEFAULT(n)
            struct Given
            {
                template <class Class>
                struct Type : Delegate<n>::Given<BOOST_PP_ENUM_PARAMS(n,T)>
                {
                    typedef void (Class::*Method)(BOOST_PP_ENUM_PARAMS(n,T)) const;
                    typedef const Class *Servant;
                    Servant object;
                    Method method;
                    Type(Servant Q, Method M) : object(Q), method(M) { }
                    void Invoke(BOOST_PP_ENUM_BINARY_PARAMS(n, T, t))
                    {
                        (object->*method)(BOOST_PP_ENUM_PARAMS(n,t));
                    }
                };
            };
        };

#undef n

//EOF
