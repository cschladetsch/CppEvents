// (C) 2009-2011Christian.Schladetsch@Gmail.com

#ifndef SCHLADETSCH_EVENTS_DETAIL_INVOKER_H
#define SCHLADETSCH_EVENTS_DETAIL_INVOKER_H

namespace Schladetsch { namespace Events { namespace Detail
{
    // structure common to all invokers of a given arity. used to define the SinksType
    template <int N>
    struct InvokerBase
    {
        // generates 'class Tn = X' for a given n
        #define SCHLADETSCH_EVENTS_PP_CLASSN_ASSIGN(z, n, X) \
            BOOST_PP_CAT(class T, n) = X

        template <BOOST_PP_ENUM(SCHLADETSCH_EVENTS_ARITY_MAX, SCHLADETSCH_EVENTS_PP_CLASSN_ASSIGN, Null)>
        struct SinksType
        {
            typedef typename Delegate<N>::template Given< BOOST_PP_ENUM_PARAMS(SCHLADETSCH_EVENTS_ARITY_MAX, T) > Delegate;
            typedef std::tr1::shared_ptr<Delegate> Ptr;
            typedef std::list<std::pair<DelegateType, Ptr> > Type;
        };
    };

    // This structure adds an operator()(T0, T1,...Tn) to derived structures,
    // and invokes all added delegates when it is called
    template <int>
    struct AddInvoker;

    // use vertical file iteration to deal with the general artiy
    #define BOOST_PP_ITERATION_LIMITS (0, SCHLADETSCH_EVENTS_ARITY_MAX - 1)
    #define BOOST_PP_FILENAME_1       "./Generate/AddInvoker.h"
    #include BOOST_PP_ITERATE()
    #undef BOOST_PP_FILENAME_1

} } }

#endif SCHLADETSCH_EVENTS_DETAIL_INVOKER_H

//EOF
