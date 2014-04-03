// (C) 2009-2011 Christian.Schladetsch@Gmail.com

#pragma once

#ifndef SCHLADETSCH_EVENTS_DETAIL_ARITY_H
#define SCHLADETSCH_EVENTS_DETAIL_ARITY_H

#include <boost/preprocessor/repetition.hpp>
#include <boost/preprocessor/repetition/repeat.hpp>
#include <boost/preprocessor/repetition/enum_params.hpp>
#include <boost/preprocessor/arithmetic/sub.hpp>
#include <boost/preprocessor/punctuation/comma_if.hpp>
#include <boost/preprocessor/iteration/local.hpp>
#include <boost/preprocessor/iteration/iterate.hpp>

namespace Schladetsch { namespace Events { namespace Detail
{
    // Null is used to represent the functional equivalent to 'void' in compile-time space
    struct Null
    {
        typedef Null Next, Prev, Value, Type;
    };

    // A structure to hold a number
    template <int N>
    struct Number
    {
        enum { Value = N };
    };

    // This determines the maximum arity of Event and other things (>)
    #ifndef SCHLADETSCH_EVENTS_ARITY_MAX
    #    define SCHLADETSCH_EVENTS_ARITY_MAX 8
    #endif

    // used for BOOST_PP_ITERATE
    #define BOOST_PP_ITERATION_LIMITS (0, SCHLADETSCH_EVENTS_ARITY_MAX - 1)

    // pre-processor function conformant for use with BOOST_PP_ENUM.
    // this simply passes through a constant expression for each invocation.
    #define SCHLADETSCH_PP_PRINT(z, n, X) X

    //
    // Arity
    //
    // Determine the 'arity', or number of non-Null arguments in a type list.

    // first, define the default case where each argument is used
    template <BOOST_PP_ENUM_PARAMS(SCHLADETSCH_EVENTS_ARITY_MAX, class T)>
    struct Arity : Number<SCHLADETSCH_EVENTS_ARITY_MAX> { };

    // now define the remaining cases for [0..SCHLADETSCH_EVENTS_ARITY_MAX - 1]
    #define CJS_ARITY(z, n, unused)                                     \
        template <BOOST_PP_ENUM_PARAMS(n, class T)>                     \
        struct Arity<                                                   \
            BOOST_PP_ENUM_PARAMS(n,T)                                   \
            BOOST_PP_COMMA_IF(n)                                        \
            BOOST_PP_ENUM(                                              \
                BOOST_PP_SUB(SCHLADETSCH_EVENTS_ARITY_MAX, n)           \
                , SCHLADETSCH_PP_PRINT                                  \
                , Null)>                                                \
            : Number<n> {};

    BOOST_PP_REPEAT(SCHLADETSCH_EVENTS_ARITY_MAX, CJS_ARITY, ~)
    #undef CJS_ARITY

} } }

#endif // SCHLADETSCH_EVENTS_DETAIL_ARITY_H

//EOF
