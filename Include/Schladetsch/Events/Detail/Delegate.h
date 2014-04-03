// (C) 2009-2011Christian.Schladetsch@Gmail.com

#ifndef SCHLADETSCH_EVENTS_DETAIL_DELEGATE_H
#define SCHLADETSCH_EVENTS_DETAIL_DELEGATE_H

namespace Schladetsch { namespace Events { namespace Detail
{
    // the following macro meta-function produces:
    //        template <class T0, class T1, ..., class Tn, class = Null, ... >
    // for a given n and where the total number of type arguments is SCHLADETSCH_EVENTS_ARITY_MAX
    #define CJS_TEMPLATE_PARAMS_WITH_DEFAULT(n)                        \
        template <BOOST_PP_ENUM_PARAMS(n, class T)                    \
            BOOST_PP_COMMA_IF(n)                                    \
            BOOST_PP_ENUM(                                            \
                BOOST_PP_SUB(SCHLADETSCH_EVENTS_ARITY_MAX, n),                \
                SCHLADETSCH_PP_PRINT, class = Null)>

    //
    // Delegate
    //
    // A Delegate in this context is something that can be invoked
    // with a set of parameters. It is basically just a function pointer-
    // but it could also be a method pointer or anything else that can
    // be invoked with a given signature.
    //
    // The purpose of this is to abstract away what it is that will
    // actually be called.

    template <int>
    struct Delegate;

    // now, define for each arity
    #define SCHLADETSCH_DELEGATE(z, n, unused)                                        \
        template <>                                                            \
        struct Delegate<n>                                                    \
        {                                                                    \
            CJS_TEMPLATE_PARAMS_WITH_DEFAULT(n)                                \
            struct Given                                                    \
            {                                                                \
                virtual ~Given() {}                                            \
                virtual void Invoke(BOOST_PP_ENUM_PARAMS(n, T)) { }            \
            };                                                                \
        };
    BOOST_PP_REPEAT(SCHLADETSCH_EVENTS_ARITY_MAX, SCHLADETSCH_DELEGATE, ~)
    #undef SCHLADETSCH_DELEGATE

    //
    // CreateFunction
    //
    // This meta-structure serves to create a function sink. A function sink
    // is-a Delegate which stores a function pointer with the same signature.

    template <int>
    struct CreateFunction;

    #define BOOST_PP_ITERATION_LIMITS (0, SCHLADETSCH_EVENTS_ARITY_MAX - 1)
    #define BOOST_PP_FILENAME_1       "./Generate/CreateFunction.h"
    #include BOOST_PP_ITERATE()
    #undef BOOST_PP_ITERATION_LIMITS
    #undef BOOST_PP_FILENAME_1

    //
    //    CreateMethod
    //
    // This meta-structre creates a method sink type. Just like with
    // the CreateFunction<> structures, these structures
    // create types that are Delegates. The difference is that
    // these structures store a method, as well as a pointer
    // to an object that will be used to invoke that method
    // when the Delegate is invoked.
    //
    // Methods can be const or non-const

    template <int, bool>
    struct CreateMethod;

    // see [TODO]
    #define BOOST_PP_ITERATION_LIMITS (0, SCHLADETSCH_EVENTS_ARITY_MAX - 1)
    #define BOOST_PP_FILENAME_1       "./Generate/CreateMethod.h"
    #include BOOST_PP_ITERATE()
    #undef BOOST_PP_ITERATION_LIMITS
    #undef BOOST_PP_FILENAME_1

    template <int>
    struct CreateEvent;

    // see [TODO]
    #define BOOST_PP_ITERATION_LIMITS (0, SCHLADETSCH_EVENTS_ARITY_MAX - 1)
    #define BOOST_PP_FILENAME_1       "./Generate/CreateEvent.h"
    #include BOOST_PP_ITERATE()
    #undef BOOST_PP_ITERATION_LIMITS
    #undef BOOST_PP_FILENAME_1

    // A Delegate can be either a function, a method (const or non-const), or an event
    struct DelegateType
    {
        enum Type { None, Function, Method, Event };
        Type type;
        DelegateType(Type T = None) : type(T) { }
        friend bool operator==(DelegateType A, DelegateType B) { return A.type == B.type; }
        friend bool operator!=(DelegateType A, DelegateType B) { return A.type != B.type; }
    };

} } }

#endif // SCHLADETSCH_EVENTS_DETAIL_DELEGATE_H

//EOF
