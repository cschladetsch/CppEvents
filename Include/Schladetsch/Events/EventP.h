// (C) 2009-2011 Christian.Scladetsch@Gmail.com
//
// Pre-processed Event.h
// 
// This file has exactly two external dependancies, <list> and <memory>
//
// The default namespace is Schladetsch::Events. To change this to Foo::Events, set the pre-processor
// constant SCHLADETSCH_NAMESPACE to Foo before including this header

#pragma once

#ifndef SCHLADETSCH_EVENTS_EVENTP_H
#define SCHLADETSCH_EVENTS_EVENTP_H

#include <list>
#include <memory>

#ifndef SCHLADETSCH_NAMESPACE
#   define SCHLADETSCH_NAMESPACE Schladetsch
#endif
namespace SCHLADETSCH_NAMESPACE { namespace Events { namespace Detail
{
    struct Null
    {
        typedef Null Next, Prev, Value, Type;
    };
    template <int N>
    struct Number
    {
        enum { Value = N };
    };
    template < class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7>
    struct Arity : Number<8> { };
    template <> struct Arity<    Null , Null , Null , Null , Null , Null , Null , Null> : Number<0> {}; template < class T0> struct Arity<  T0 ,  Null , Null , Null , Null , Null , Null , Null> : Number<1> {}; template < class T0 , class T1> struct Arity<  T0 , T1 ,  Null , Null , Null , Null , Null , Null> : Number<2> {}; template < class T0 , class T1 , class T2> struct Arity<  T0 , T1 , T2 ,  Null , Null , Null , Null , Null> : Number<3> {}; template < class T0 , class T1 , class T2 , class T3> struct Arity<  T0 , T1 , T2 , T3 ,  Null , Null , Null , Null> : Number<4> {}; template < class T0 , class T1 , class T2 , class T3 , class T4> struct Arity<  T0 , T1 , T2 , T3 , T4 ,  Null , Null , Null> : Number<5> {}; template < class T0 , class T1 , class T2 , class T3 , class T4 , class T5> struct Arity<  T0 , T1 , T2 , T3 , T4 , T5 ,  Null , Null> : Number<6> {}; template < class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6> struct Arity<  T0 , T1 , T2 , T3 , T4 , T5 , T6 ,  Null> : Number<7> {};
} } }
namespace SCHLADETSCH_NAMESPACE { namespace Events { namespace Detail
{
    template <int>
    struct Delegate;
    template <> struct Delegate<0> { template <   class = Null , class = Null , class = Null , class = Null , class = Null , class = Null , class = Null , class = Null> struct Given { virtual ~Given() {} virtual void Invoke() { } }; }; template <> struct Delegate<1> { template < class T0 ,  class = Null , class = Null , class = Null , class = Null , class = Null , class = Null , class = Null> struct Given { virtual ~Given() {} virtual void Invoke( T0) { } }; }; template <> struct Delegate<2> { template < class T0 , class T1 ,  class = Null , class = Null , class = Null , class = Null , class = Null , class = Null> struct Given { virtual ~Given() {} virtual void Invoke( T0 , T1) { } }; }; template <> struct Delegate<3> { template < class T0 , class T1 , class T2 ,  class = Null , class = Null , class = Null , class = Null , class = Null> struct Given { virtual ~Given() {} virtual void Invoke( T0 , T1 , T2) { } }; }; template <> struct Delegate<4> { template < class T0 , class T1 , class T2 , class T3 ,  class = Null , class = Null , class = Null , class = Null> struct Given { virtual ~Given() {} virtual void Invoke( T0 , T1 , T2 , T3) { } }; }; template <> struct Delegate<5> { template < class T0 , class T1 , class T2 , class T3 , class T4 ,  class = Null , class = Null , class = Null> struct Given { virtual ~Given() {} virtual void Invoke( T0 , T1 , T2 , T3 , T4) { } }; }; template <> struct Delegate<6> { template < class T0 , class T1 , class T2 , class T3 , class T4 , class T5 ,  class = Null , class = Null> struct Given { virtual ~Given() {} virtual void Invoke( T0 , T1 , T2 , T3 , T4 , T5) { } }; }; template <> struct Delegate<7> { template < class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 ,  class = Null> struct Given { virtual ~Given() {} virtual void Invoke( T0 , T1 , T2 , T3 , T4 , T5 , T6) { } }; };
    template <int>
    struct CreateFunction;
    
        template <>
        struct CreateFunction<0>
        {
            template <   class = Null , class = Null , class = Null , class = Null , class = Null , class = Null , class = Null , class = Null>
            struct Given : Delegate<0>::Given<>
            {
                typedef void (*Function)();
                Function fun;
                Given(Function F) : fun(F) { }
                void Invoke()
                {
                    fun();
                }
            };
        };
        template <>
        struct CreateFunction<1>
        {
            template < class T0 ,  class = Null , class = Null , class = Null , class = Null , class = Null , class = Null , class = Null>
            struct Given : Delegate<1>::Given< T0>
            {
                typedef void (*Function)( T0);
                Function fun;
                Given(Function F) : fun(F) { }
                void Invoke( T0 t0)
                {
                    fun( t0);
                }
            };
        };
        template <>
        struct CreateFunction<2>
        {
            template < class T0 , class T1 ,  class = Null , class = Null , class = Null , class = Null , class = Null , class = Null>
            struct Given : Delegate<2>::Given< T0 , T1>
            {
                typedef void (*Function)( T0 , T1);
                Function fun;
                Given(Function F) : fun(F) { }
                void Invoke( T0 t0 , T1 t1)
                {
                    fun( t0 , t1);
                }
            };
        };
        template <>
        struct CreateFunction<3>
        {
            template < class T0 , class T1 , class T2 ,  class = Null , class = Null , class = Null , class = Null , class = Null>
            struct Given : Delegate<3>::Given< T0 , T1 , T2>
            {
                typedef void (*Function)( T0 , T1 , T2);
                Function fun;
                Given(Function F) : fun(F) { }
                void Invoke( T0 t0 , T1 t1 , T2 t2)
                {
                    fun( t0 , t1 , t2);
                }
            };
        };
        template <>
        struct CreateFunction<4>
        {
            template < class T0 , class T1 , class T2 , class T3 ,  class = Null , class = Null , class = Null , class = Null>
            struct Given : Delegate<4>::Given< T0 , T1 , T2 , T3>
            {
                typedef void (*Function)( T0 , T1 , T2 , T3);
                Function fun;
                Given(Function F) : fun(F) { }
                void Invoke( T0 t0 , T1 t1 , T2 t2 , T3 t3)
                {
                    fun( t0 , t1 , t2 , t3);
                }
            };
        };
        template <>
        struct CreateFunction<5>
        {
            template < class T0 , class T1 , class T2 , class T3 , class T4 ,  class = Null , class = Null , class = Null>
            struct Given : Delegate<5>::Given< T0 , T1 , T2 , T3 , T4>
            {
                typedef void (*Function)( T0 , T1 , T2 , T3 , T4);
                Function fun;
                Given(Function F) : fun(F) { }
                void Invoke( T0 t0 , T1 t1 , T2 t2 , T3 t3 , T4 t4)
                {
                    fun( t0 , t1 , t2 , t3 , t4);
                }
            };
        };
        template <>
        struct CreateFunction<6>
        {
            template < class T0 , class T1 , class T2 , class T3 , class T4 , class T5 ,  class = Null , class = Null>
            struct Given : Delegate<6>::Given< T0 , T1 , T2 , T3 , T4 , T5>
            {
                typedef void (*Function)( T0 , T1 , T2 , T3 , T4 , T5);
                Function fun;
                Given(Function F) : fun(F) { }
                void Invoke( T0 t0 , T1 t1 , T2 t2 , T3 t3 , T4 t4 , T5 t5)
                {
                    fun( t0 , t1 , t2 , t3 , t4 , t5);
                }
            };
        };
        template <>
        struct CreateFunction<7>
        {
            template < class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 ,  class = Null>
            struct Given : Delegate<7>::Given< T0 , T1 , T2 , T3 , T4 , T5 , T6>
            {
                typedef void (*Function)( T0 , T1 , T2 , T3 , T4 , T5 , T6);
                Function fun;
                Given(Function F) : fun(F) { }
                void Invoke( T0 t0 , T1 t1 , T2 t2 , T3 t3 , T4 t4 , T5 t5 , T6 t6)
                {
                    fun( t0 , t1 , t2 , t3 , t4 , t5 , t6);
                }
            };
        };
    template <int, bool>
    struct CreateMethod;
    #line 1 "c:\\library\\boost\\boost_1_47_0\\boost\\preprocessor\\iteration\\detail\\iter\\forward1.hpp"
        template <>
        struct CreateMethod<0,false>
        {
            template <   class = Null , class = Null , class = Null , class = Null , class = Null , class = Null , class = Null , class = Null>
            struct Given
            {
                template <class Class>
                struct Type : Delegate<0>::Given<>
                {
                    typedef void (Class::*Method)();
                    typedef Class *Servant;
                    Servant object;
                    Method method;
                    Type(Servant Q, Method M) : object(Q), method(M) { }
                    void Invoke()
                    {
                        (object->*method)();
                    }
                };
            };
        };
        template <>
        struct CreateMethod<0, true>
        {
            template <   class = Null , class = Null , class = Null , class = Null , class = Null , class = Null , class = Null , class = Null>
            struct Given
            {
                template <class Class>
                struct Type : Delegate<0>::Given<>
                {
                    typedef void (Class::*Method)() const;
                    typedef const Class *Servant;
                    Servant object;
                    Method method;
                    Type(Servant Q, Method M) : object(Q), method(M) { }
                    void Invoke()
                    {
                        (object->*method)();
                    }
                };
            };
        };
        template <>
        struct CreateMethod<1,false>
        {
            template < class T0 ,  class = Null , class = Null , class = Null , class = Null , class = Null , class = Null , class = Null>
            struct Given
            {
                template <class Class>
                struct Type : Delegate<1>::Given< T0>
                {
                    typedef void (Class::*Method)( T0);
                    typedef Class *Servant;
                    Servant object;
                    Method method;
                    Type(Servant Q, Method M) : object(Q), method(M) { }
                    void Invoke( T0 t0)
                    {
                        (object->*method)( t0);
                    }
                };
            };
        };
        template <>
        struct CreateMethod<1, true>
        {
            template < class T0 ,  class = Null , class = Null , class = Null , class = Null , class = Null , class = Null , class = Null>
            struct Given
            {
                template <class Class>
                struct Type : Delegate<1>::Given< T0>
                {
                    typedef void (Class::*Method)( T0) const;
                    typedef const Class *Servant;
                    Servant object;
                    Method method;
                    Type(Servant Q, Method M) : object(Q), method(M) { }
                    void Invoke( T0 t0)
                    {
                        (object->*method)( t0);
                    }
                };
            };
        };
        template <>
        struct CreateMethod<2,false>
        {
            template < class T0 , class T1 ,  class = Null , class = Null , class = Null , class = Null , class = Null , class = Null>
            struct Given
            {
                template <class Class>
                struct Type : Delegate<2>::Given< T0 , T1>
                {
                    typedef void (Class::*Method)( T0 , T1);
                    typedef Class *Servant;
                    Servant object;
                    Method method;
                    Type(Servant Q, Method M) : object(Q), method(M) { }
                    void Invoke( T0 t0 , T1 t1)
                    {
                        (object->*method)( t0 , t1);
                    }
                };
            };
        };
        template <>
        struct CreateMethod<2, true>
        {
            template < class T0 , class T1 ,  class = Null , class = Null , class = Null , class = Null , class = Null , class = Null>
            struct Given
            {
                template <class Class>
                struct Type : Delegate<2>::Given< T0 , T1>
                {
                    typedef void (Class::*Method)( T0 , T1) const;
                    typedef const Class *Servant;
                    Servant object;
                    Method method;
                    Type(Servant Q, Method M) : object(Q), method(M) { }
                    void Invoke( T0 t0 , T1 t1)
                    {
                        (object->*method)( t0 , t1);
                    }
                };
            };
        };
        template <>
        struct CreateMethod<3,false>
        {
            template < class T0 , class T1 , class T2 ,  class = Null , class = Null , class = Null , class = Null , class = Null>
            struct Given
            {
                template <class Class>
                struct Type : Delegate<3>::Given< T0 , T1 , T2>
                {
                    typedef void (Class::*Method)( T0 , T1 , T2);
                    typedef Class *Servant;
                    Servant object;
                    Method method;
                    Type(Servant Q, Method M) : object(Q), method(M) { }
                    void Invoke( T0 t0 , T1 t1 , T2 t2)
                    {
                        (object->*method)( t0 , t1 , t2);
                    }
                };
            };
        };
        template <>
        struct CreateMethod<3, true>
        {
            template < class T0 , class T1 , class T2 ,  class = Null , class = Null , class = Null , class = Null , class = Null>
            struct Given
            {
                template <class Class>
                struct Type : Delegate<3>::Given< T0 , T1 , T2>
                {
                    typedef void (Class::*Method)( T0 , T1 , T2) const;
                    typedef const Class *Servant;
                    Servant object;
                    Method method;
                    Type(Servant Q, Method M) : object(Q), method(M) { }
                    void Invoke( T0 t0 , T1 t1 , T2 t2)
                    {
                        (object->*method)( t0 , t1 , t2);
                    }
                };
            };
        };
        template <>
        struct CreateMethod<4,false>
        {
            template < class T0 , class T1 , class T2 , class T3 ,  class = Null , class = Null , class = Null , class = Null>
            struct Given
            {
                template <class Class>
                struct Type : Delegate<4>::Given< T0 , T1 , T2 , T3>
                {
                    typedef void (Class::*Method)( T0 , T1 , T2 , T3);
                    typedef Class *Servant;
                    Servant object;
                    Method method;
                    Type(Servant Q, Method M) : object(Q), method(M) { }
                    void Invoke( T0 t0 , T1 t1 , T2 t2 , T3 t3)
                    {
                        (object->*method)( t0 , t1 , t2 , t3);
                    }
                };
            };
        };
        template <>
        struct CreateMethod<4, true>
        {
            template < class T0 , class T1 , class T2 , class T3 ,  class = Null , class = Null , class = Null , class = Null>
            struct Given
            {
                template <class Class>
                struct Type : Delegate<4>::Given< T0 , T1 , T2 , T3>
                {
                    typedef void (Class::*Method)( T0 , T1 , T2 , T3) const;
                    typedef const Class *Servant;
                    Servant object;
                    Method method;
                    Type(Servant Q, Method M) : object(Q), method(M) { }
                    void Invoke( T0 t0 , T1 t1 , T2 t2 , T3 t3)
                    {
                        (object->*method)( t0 , t1 , t2 , t3);
                    }
                };
            };
        };
        template <>
        struct CreateMethod<5,false>
        {
            template < class T0 , class T1 , class T2 , class T3 , class T4 ,  class = Null , class = Null , class = Null>
            struct Given
            {
                template <class Class>
                struct Type : Delegate<5>::Given< T0 , T1 , T2 , T3 , T4>
                {
                    typedef void (Class::*Method)( T0 , T1 , T2 , T3 , T4);
                    typedef Class *Servant;
                    Servant object;
                    Method method;
                    Type(Servant Q, Method M) : object(Q), method(M) { }
                    void Invoke( T0 t0 , T1 t1 , T2 t2 , T3 t3 , T4 t4)
                    {
                        (object->*method)( t0 , t1 , t2 , t3 , t4);
                    }
                };
            };
        };
        template <>
        struct CreateMethod<5, true>
        {
            template < class T0 , class T1 , class T2 , class T3 , class T4 ,  class = Null , class = Null , class = Null>
            struct Given
            {
                template <class Class>
                struct Type : Delegate<5>::Given< T0 , T1 , T2 , T3 , T4>
                {
                    typedef void (Class::*Method)( T0 , T1 , T2 , T3 , T4) const;
                    typedef const Class *Servant;
                    Servant object;
                    Method method;
                    Type(Servant Q, Method M) : object(Q), method(M) { }
                    void Invoke( T0 t0 , T1 t1 , T2 t2 , T3 t3 , T4 t4)
                    {
                        (object->*method)( t0 , t1 , t2 , t3 , t4);
                    }
                };
            };
        };
        template <>
        struct CreateMethod<6,false>
        {
            template < class T0 , class T1 , class T2 , class T3 , class T4 , class T5 ,  class = Null , class = Null>
            struct Given
            {
                template <class Class>
                struct Type : Delegate<6>::Given< T0 , T1 , T2 , T3 , T4 , T5>
                {
                    typedef void (Class::*Method)( T0 , T1 , T2 , T3 , T4 , T5);
                    typedef Class *Servant;
                    Servant object;
                    Method method;
                    Type(Servant Q, Method M) : object(Q), method(M) { }
                    void Invoke( T0 t0 , T1 t1 , T2 t2 , T3 t3 , T4 t4 , T5 t5)
                    {
                        (object->*method)( t0 , t1 , t2 , t3 , t4 , t5);
                    }
                };
            };
        };
        template <>
        struct CreateMethod<6, true>
        {
            template < class T0 , class T1 , class T2 , class T3 , class T4 , class T5 ,  class = Null , class = Null>
            struct Given
            {
                template <class Class>
                struct Type : Delegate<6>::Given< T0 , T1 , T2 , T3 , T4 , T5>
                {
                    typedef void (Class::*Method)( T0 , T1 , T2 , T3 , T4 , T5) const;
                    typedef const Class *Servant;
                    Servant object;
                    Method method;
                    Type(Servant Q, Method M) : object(Q), method(M) { }
                    void Invoke( T0 t0 , T1 t1 , T2 t2 , T3 t3 , T4 t4 , T5 t5)
                    {
                        (object->*method)( t0 , t1 , t2 , t3 , t4 , t5);
                    }
                };
            };
        };
        template <>
        struct CreateMethod<7,false>
        {
            template < class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 ,  class = Null>
            struct Given
            {
                template <class Class>
                struct Type : Delegate<7>::Given< T0 , T1 , T2 , T3 , T4 , T5 , T6>
                {
                    typedef void (Class::*Method)( T0 , T1 , T2 , T3 , T4 , T5 , T6);
                    typedef Class *Servant;
                    Servant object;
                    Method method;
                    Type(Servant Q, Method M) : object(Q), method(M) { }
                    void Invoke( T0 t0 , T1 t1 , T2 t2 , T3 t3 , T4 t4 , T5 t5 , T6 t6)
                    {
                        (object->*method)( t0 , t1 , t2 , t3 , t4 , t5 , t6);
                    }
                };
            };
        };
        template <>
        struct CreateMethod<7, true>
        {
            template < class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 ,  class = Null>
            struct Given
            {
                template <class Class>
                struct Type : Delegate<7>::Given< T0 , T1 , T2 , T3 , T4 , T5 , T6>
                {
                    typedef void (Class::*Method)( T0 , T1 , T2 , T3 , T4 , T5 , T6) const;
                    typedef const Class *Servant;
                    Servant object;
                    Method method;
                    Type(Servant Q, Method M) : object(Q), method(M) { }
                    void Invoke( T0 t0 , T1 t1 , T2 t2 , T3 t3 , T4 t4 , T5 t5 , T6 t6)
                    {
                        (object->*method)( t0 , t1 , t2 , t3 , t4 , t5 , t6);
                    }
                };
            };
        };
    template <int>
    struct CreateEvent;
    #line 1 "c:\\library\\boost\\boost_1_47_0\\boost\\preprocessor\\iteration\\detail\\iter\\forward1.hpp"
        template <>
        struct CreateEvent<0>
        {
            template <   class = Null , class = Null , class = Null , class = Null , class = Null , class = Null , class = Null , class = Null>
            struct Given
            {
                template <class Ev>
                struct Using : Delegate<0>::Given<>
                {
                    typedef int XXX;
                    typedef Ev EventType;
                    EventType const &ev;
                    Using(EventType const &F) : ev(F) { }
                    void Invoke()
                    {
                        ev();
                    }
                };
            };
        };
        template <>
        struct CreateEvent<1>
        {
            template < class T0 ,  class = Null , class = Null , class = Null , class = Null , class = Null , class = Null , class = Null>
            struct Given
            {
                template <class Ev>
                struct Using : Delegate<1>::Given< T0>
                {
                    typedef int XXX;
                    typedef Ev EventType;
                    EventType const &ev;
                    Using(EventType const &F) : ev(F) { }
                    void Invoke( T0 t0)
                    {
                        ev( t0);
                    }
                };
            };
        };
        template <>
        struct CreateEvent<2>
        {
            template < class T0 , class T1 ,  class = Null , class = Null , class = Null , class = Null , class = Null , class = Null>
            struct Given
            {
                template <class Ev>
                struct Using : Delegate<2>::Given< T0 , T1>
                {
                    typedef int XXX;
                    typedef Ev EventType;
                    EventType const &ev;
                    Using(EventType const &F) : ev(F) { }
                    void Invoke( T0 t0 , T1 t1)
                    {
                        ev( t0 , t1);
                    }
                };
            };
        };
        template <>
        struct CreateEvent<3>
        {
            template < class T0 , class T1 , class T2 ,  class = Null , class = Null , class = Null , class = Null , class = Null>
            struct Given
            {
                template <class Ev>
                struct Using : Delegate<3>::Given< T0 , T1 , T2>
                {
                    typedef int XXX;
                    typedef Ev EventType;
                    EventType const &ev;
                    Using(EventType const &F) : ev(F) { }
                    void Invoke( T0 t0 , T1 t1 , T2 t2)
                    {
                        ev( t0 , t1 , t2);
                    }
                };
            };
        };
        template <>
        struct CreateEvent<4>
        {
            template < class T0 , class T1 , class T2 , class T3 ,  class = Null , class = Null , class = Null , class = Null>
            struct Given
            {
                template <class Ev>
                struct Using : Delegate<4>::Given< T0 , T1 , T2 , T3>
                {
                    typedef int XXX;
                    typedef Ev EventType;
                    EventType const &ev;
                    Using(EventType const &F) : ev(F) { }
                    void Invoke( T0 t0 , T1 t1 , T2 t2 , T3 t3)
                    {
                        ev( t0 , t1 , t2 , t3);
                    }
                };
            };
        };
        template <>
        struct CreateEvent<5>
        {
            template < class T0 , class T1 , class T2 , class T3 , class T4 ,  class = Null , class = Null , class = Null>
            struct Given
            {
                template <class Ev>
                struct Using : Delegate<5>::Given< T0 , T1 , T2 , T3 , T4>
                {
                    typedef int XXX;
                    typedef Ev EventType;
                    EventType const &ev;
                    Using(EventType const &F) : ev(F) { }
                    void Invoke( T0 t0 , T1 t1 , T2 t2 , T3 t3 , T4 t4)
                    {
                        ev( t0 , t1 , t2 , t3 , t4);
                    }
                };
            };
        };
        template <>
        struct CreateEvent<6>
        {
            template < class T0 , class T1 , class T2 , class T3 , class T4 , class T5 ,  class = Null , class = Null>
            struct Given
            {
                template <class Ev>
                struct Using : Delegate<6>::Given< T0 , T1 , T2 , T3 , T4 , T5>
                {
                    typedef int XXX;
                    typedef Ev EventType;
                    EventType const &ev;
                    Using(EventType const &F) : ev(F) { }
                    void Invoke( T0 t0 , T1 t1 , T2 t2 , T3 t3 , T4 t4 , T5 t5)
                    {
                        ev( t0 , t1 , t2 , t3 , t4 , t5);
                    }
                };
            };
        };
        template <>
        struct CreateEvent<7>
        {
            template < class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 ,  class = Null>
            struct Given
            {
                template <class Ev>
                struct Using : Delegate<7>::Given< T0 , T1 , T2 , T3 , T4 , T5 , T6>
                {
                    typedef int XXX;
                    typedef Ev EventType;
                    EventType const &ev;
                    Using(EventType const &F) : ev(F) { }
                    void Invoke( T0 t0 , T1 t1 , T2 t2 , T3 t3 , T4 t4 , T5 t5 , T6 t6)
                    {
                        ev( t0 , t1 , t2 , t3 , t4 , t5 , t6);
                    }
                };
            };
        };
    struct DelegateType
    {
        enum Type { None, Function, Method, Event };
        Type type;
        DelegateType(Type T = None) : type(T) { }
        friend bool operator==(DelegateType A, DelegateType B) { return A.type == B.type; }
        friend bool operator!=(DelegateType A, DelegateType B) { return A.type != B.type; }
    };
} } }
namespace SCHLADETSCH_NAMESPACE { namespace Events { namespace Detail
{
    template <int N>
    struct InvokerBase
    {
        template < class T0 = Null , class T1 = Null , class T2 = Null , class T3 = Null , class T4 = Null , class T5 = Null , class T6 = Null , class T7 = Null>
        struct SinksType
        {
            typedef typename Delegate<N>::template Given<  T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 > Delegate;
            typedef std::tr1::shared_ptr<Delegate> Ptr;
            typedef std::list<std::pair<DelegateType, Ptr> > Type;
        };
    };
    template <int>
    struct AddInvoker;
    #line 1 "c:\\library\\boost\\boost_1_47_0\\boost\\preprocessor\\iteration\\detail\\iter\\forward1.hpp"
        template <>
        struct AddInvoker<0> : InvokerBase<0>
        {
            template < class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7>
            struct Given
            {
                typedef typename SinksType<>::Type Sinks;
                Sinks sinks;
                void operator()() const
                {
                    typename Sinks::const_iterator iter = sinks.begin(), end = sinks.end();
                    for (; iter != end; ++iter)
                    {
                        iter->second->Invoke();
                    }
                }
            };
        };
        template <>
        struct AddInvoker<1> : InvokerBase<1>
        {
            template < class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7>
            struct Given
            {
                typedef typename SinksType< T0>::Type Sinks;
                Sinks sinks;
                void operator()( T0 t0) const
                {
                    typename Sinks::const_iterator iter = sinks.begin(), end = sinks.end();
                    for (; iter != end; ++iter)
                    {
                        iter->second->Invoke( t0);
                    }
                }
            };
        };
        template <>
        struct AddInvoker<2> : InvokerBase<2>
        {
            template < class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7>
            struct Given
            {
                typedef typename SinksType< T0 , T1>::Type Sinks;
                Sinks sinks;
                void operator()( T0 t0 , T1 t1) const
                {
                    typename Sinks::const_iterator iter = sinks.begin(), end = sinks.end();
                    for (; iter != end; ++iter)
                    {
                        iter->second->Invoke( t0 , t1);
                    }
                }
            };
        };
        template <>
        struct AddInvoker<3> : InvokerBase<3>
        {
            template < class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7>
            struct Given
            {
                typedef typename SinksType< T0 , T1 , T2>::Type Sinks;
                Sinks sinks;
                void operator()( T0 t0 , T1 t1 , T2 t2) const
                {
                    typename Sinks::const_iterator iter = sinks.begin(), end = sinks.end();
                    for (; iter != end; ++iter)
                    {
                        iter->second->Invoke( t0 , t1 , t2);
                    }
                }
            };
        };
        template <>
        struct AddInvoker<4> : InvokerBase<4>
        {
            template < class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7>
            struct Given
            {
                typedef typename SinksType< T0 , T1 , T2 , T3>::Type Sinks;
                Sinks sinks;
                void operator()( T0 t0 , T1 t1 , T2 t2 , T3 t3) const
                {
                    typename Sinks::const_iterator iter = sinks.begin(), end = sinks.end();
                    for (; iter != end; ++iter)
                    {
                        iter->second->Invoke( t0 , t1 , t2 , t3);
                    }
                }
            };
        };
        template <>
        struct AddInvoker<5> : InvokerBase<5>
        {
            template < class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7>
            struct Given
            {
                typedef typename SinksType< T0 , T1 , T2 , T3 , T4>::Type Sinks;
                Sinks sinks;
                void operator()( T0 t0 , T1 t1 , T2 t2 , T3 t3 , T4 t4) const
                {
                    typename Sinks::const_iterator iter = sinks.begin(), end = sinks.end();
                    for (; iter != end; ++iter)
                    {
                        iter->second->Invoke( t0 , t1 , t2 , t3 , t4);
                    }
                }
            };
        };
        template <>
        struct AddInvoker<6> : InvokerBase<6>
        {
            template < class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7>
            struct Given
            {
                typedef typename SinksType< T0 , T1 , T2 , T3 , T4 , T5>::Type Sinks;
                Sinks sinks;
                void operator()( T0 t0 , T1 t1 , T2 t2 , T3 t3 , T4 t4 , T5 t5) const
                {
                    typename Sinks::const_iterator iter = sinks.begin(), end = sinks.end();
                    for (; iter != end; ++iter)
                    {
                        iter->second->Invoke( t0 , t1 , t2 , t3 , t4 , t5);
                    }
                }
            };
        };
        template <>
        struct AddInvoker<7> : InvokerBase<7>
        {
            template < class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7>
            struct Given
            {
                typedef typename SinksType< T0 , T1 , T2 , T3 , T4 , T5 , T6>::Type Sinks;
                Sinks sinks;
                void operator()( T0 t0 , T1 t1 , T2 t2 , T3 t3 , T4 t4 , T5 t5 , T6 t6) const
                {
                    typename Sinks::const_iterator iter = sinks.begin(), end = sinks.end();
                    for (; iter != end; ++iter)
                    {
                        iter->second->Invoke( t0 , t1 , t2 , t3 , t4 , t5 , t6);
                    }
                }
            };
        };
} } }
namespace SCHLADETSCH_NAMESPACE { namespace Events { namespace Detail
{
    template <int N>
    struct Event
    {
        template < class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7>
        struct Create
            : AddInvoker<N>::template Given< T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7>
        {
            typedef typename AddInvoker<N>::template Given< T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7> Parent;
            typedef typename Parent::Sinks Sinks;
            typedef typename Sinks::value_type ValueType;
            using Parent::sinks;
            typedef typename CreateFunction<N>::template Given< T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7> FunctionDelegate;
            typedef typename FunctionDelegate::Function Function;
            typedef typename Event<N>:: template Create< T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7> ThisType;
            typedef typename CreateEvent<N>::template Given< T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7>::template Using<ThisType> EventDelegate;
            template <class Class, bool Const>
            struct MethodObjectBase : CreateMethod<N, Const>::template Given< T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7>::template Type<Class>
            {
                typedef typename CreateMethod<N, Const>::template Given< T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7>::template Type<Class> Parent;
                MethodObjectBase(typename Parent::Servant Q, typename Parent::Method M) : Parent(Q, M) { }
            };
            template <class Class>
            struct ConstMethodObject : MethodObjectBase<Class,true>
            {
                typedef MethodObjectBase<Class,true> Parent;
                ConstMethodObject(typename Parent::Servant Q, typename Parent::Method M) : Parent(Q, M) { }
            };
            template <class Class>
            struct MethodObject : MethodObjectBase<Class,false>
            {
                typedef MethodObjectBase<Class,false> Parent;
                MethodObject(typename Parent::Servant Q, typename Parent::Method M) : Parent(Q, M) { }
            };
            ~Create()
            {
                Clear();
            }
            void Clear()
            {
                sinks.clear();
            }
            void AddFunction(Function fun)
            {
                this->sinks.push_back(ValueType(DelegateType::Function, new FunctionDelegate(fun)));
            }
            template <class C, bool D>
            void AddMethod(MethodObjectBase<C,D> const &foo)
            {
                this->sinks.push_back(ValueType(DelegateType::Method, new MethodObjectBase<C,D>(foo)));
            }
            void RemoveFunction(Function fun)
            {
                typename Sinks::iterator A = this->sinks.begin(), B = this->sinks.end();
                for (; A != B; ++A)
                {
                    if (A->first != DelegateType::Function)
                        continue;
                    FunctionDelegate *F = reinterpret_cast<FunctionDelegate *>(A->second.get());
                    if (F->fun != fun)
                        continue;
                    this->sinks.erase(A);
                    return;
                }
            }
            template <class C, bool D>
            void RemoveMethod(MethodObjectBase<C,D> const &bound)
            {
                typename Sinks::iterator A = this->sinks.begin(), B = this->sinks.end();
                for (; A != B; ++A)
                {
                    if (A->first != DelegateType::Method)
                        continue;
                    MethodObjectBase<C,D> *M = reinterpret_cast<MethodObjectBase<C,D> *>(A->second.get());
                    if (M->object != bound.object || M->method != bound.method)
                        continue;
                    this->sinks.erase(A);
                    return;
                }
            }
            void Add(Function fun)
            {
                AddFunction(fun);
            }
            template <class C>
            void Add(const C &object, typename ConstMethodObject<C>::Method method)
            {
                AddMethod(ConstMethodObject<C>(&object, method));
            }
            template <class C>
            void Add(C &object, typename MethodObject<C>::Method method)
            {
                AddMethod(MethodObject<C>(&object, method));
            }
            void Add(ThisType const &ev)
            {
                this->sinks.push_back(ValueType(DelegateType::Event, new EventDelegate(ev)));
            }
            void Remove(Function fun)
            {
                RemoveFunction(fun);
            }
            template <class C>
            void Remove(const C &object, typename ConstMethodObject<C>::Method method)
            {
                RemoveMethod(ConstMethodObject<C>(&object, method));
            }
            template <class C>
            void Remove(C &object, typename MethodObject<C>::Method method)
            {
                RemoveMethod(MethodObject<C>(&object, method));
            }
            void Remove(ThisType const &ev)
            {
                typename Sinks::iterator A = this->sinks.begin(), B = this->sinks.end();
                for (; A != B; ++A)
                {
                    if (A->first != DelegateType::Event)
                        continue;
                    EventDelegate *M = reinterpret_cast<EventDelegate *>(A->second.get());
                    if (&M->ev != &ev)
                        continue;
                    this->sinks.erase(A);
                    return;
                }
            }
            Create() { }
        private:
        };
    };
} } }
namespace SCHLADETSCH_NAMESPACE { namespace Events
{
    template < class T0 = Detail::Null , class T1 = Detail::Null , class T2 = Detail::Null , class T3 = Detail::Null , class T4 = Detail::Null , class T5 = Detail::Null , class T6 = Detail::Null , class T7 = Detail::Null>
    struct Event
        : Detail::Event<Detail::Arity< T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7>::Value>
            ::template Create< T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7> { };
} }

#endif // SCHLADETSCH_EVENTS_EVENTP_H

