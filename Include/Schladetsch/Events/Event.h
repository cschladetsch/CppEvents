// (C) 2009-2011 Christian.Schladetsch@Gmail.com

#pragma once

#ifndef SCHLADETSCH_EVENTS_EVENT_H
#define SCHLADETSCH_EVENTS_EVENT_H

#include "./Detail/Event.h"

namespace Schladetsch { namespace Events
{
    /// A multicast event. When the event is fired, all registered delegates
    /// will be invoked. A delegate can be either a function pointer, a const or non-const bound method,
    /// or another event.
    template <BOOST_PP_ENUM(SCHLADETSCH_EVENTS_ARITY_MAX, SCHLADETSCH_EVENTS_PP_CLASSN_ASSIGN, Detail::Null)>
    struct Event
        : Detail::Event<Detail::Arity<BOOST_PP_ENUM_PARAMS(SCHLADETSCH_EVENTS_ARITY_MAX, T)>::Value>
            ::template Create<BOOST_PP_ENUM_PARAMS(SCHLADETSCH_EVENTS_ARITY_MAX, T)> { };

} }

#endif // SCHLADETSCH_EVENTS_EVENT_H

//EOF
