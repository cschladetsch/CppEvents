// (C) 2009-2011 Christian.Schladetsch@Gmail.com

#pragma once

#ifndef SCHLADETSCH_EVENTS_DETAIL_EVENT_H
#define SCHLADETSCH_EVENTS_DETAIL_EVENT_H

#include <list>
#include <memory>

#include "Schladetsch/Events/Detail/Arity.h"
#include "Schladetsch/Events/Detail/Delegate.h"
#include "Schladetsch/Events/Detail/Invoker.h"

namespace Schladetsch { namespace Events { namespace Detail
{
    #define SCHLADETSCH_EVENTS_TYPE_PARAM_LIST \
        BOOST_PP_ENUM_PARAMS(SCHLADETSCH_EVENTS_ARITY_MAX, T)

    template <int N>
    struct Event
    {
        template <BOOST_PP_ENUM_PARAMS(SCHLADETSCH_EVENTS_ARITY_MAX, class T)>
        struct Create
            // add the correct operator() method to the type
            : AddInvoker<N>::template Given<SCHLADETSCH_EVENTS_TYPE_PARAM_LIST>
        {
            typedef typename AddInvoker<N>::template Given<SCHLADETSCH_EVENTS_TYPE_PARAM_LIST> Parent;
            typedef typename Parent::Sinks Sinks;
            typedef typename Sinks::value_type ValueType;

            // inject parents' sinks into local scope
            using Parent::sinks;

            /// Create the function delegate type
            typedef typename CreateFunction<N>::template Given<SCHLADETSCH_EVENTS_TYPE_PARAM_LIST> FunctionDelegate;
            typedef typename FunctionDelegate::Function Function;

            // Create the event delegate type, for chaining to other events
            typedef typename Event<N>:: template Create<SCHLADETSCH_EVENTS_TYPE_PARAM_LIST> ThisType;
            typedef typename CreateEvent<N>::template Given<SCHLADETSCH_EVENTS_TYPE_PARAM_LIST>::template Using<ThisType> EventDelegate;

            /// structure common to both const- and non-const methods
            template <class Class, bool Const>
            struct MethodObjectBase : CreateMethod<N, Const>::template Given<SCHLADETSCH_EVENTS_TYPE_PARAM_LIST>::template Type<Class>
            {
                typedef typename CreateMethod<N, Const>::template Given<SCHLADETSCH_EVENTS_TYPE_PARAM_LIST>::template Type<Class> Parent;
                MethodObjectBase(typename Parent::Servant Q, typename Parent::Method M) : Parent(Q, M) { }
            };

            // a const method that matches the event signature
            template <class Class>
            struct ConstMethodObject : MethodObjectBase<Class,true>
            {
                typedef MethodObjectBase<Class,true> Parent;
                ConstMethodObject(typename Parent::Servant Q, typename Parent::Method M) : Parent(Q, M) { }
            };

            // a non-const method that matches the event signature
            template <class Class>
            struct MethodObject : MethodObjectBase<Class,false>
            {
                typedef MethodObjectBase<Class,false> Parent;
                MethodObject(typename Parent::Servant Q, typename Parent::Method M) : Parent(Q, M) { }
            };

            // default copy construction and default assignment work by design without
            // a need for explicit implementation
            //Create();
            //Create(const Create& other);
            //Create &operator=(const Create &other);
            
            // destructor not needed
            //~Clear();

            /// Remove all delegates
            void Clear()
            {
                sinks.clear();
            }

            /// Add a new function delegate
            void AddFunction(Function fun)
            {
				//ValueType vt(DelegateType::Function, std::make_shared<FunctionDelegate>(new FunctionDelegate(fun)));
				ValueType vt(DelegateType::Function, new FunctionDelegate(fun));
                sinks.push_back(vt);
            }

            /// Add a new Method delegate
            template <class C, bool D>
            void AddMethod(MethodObjectBase<C,D> const &foo)
            {
                sinks.push_back(ValueType(DelegateType::Method, new MethodObjectBase<C,D>(foo)));
            }

            /// Remove an existing function delegate
            void RemoveFunction(Function fun)
            {
                typename Sinks::iterator A = sinks.begin(), B = sinks.end();
                for (; A != B; ++A)
                {
                    if (A->first != DelegateType::Function)
                        continue;
					// TODO shared_ptr
                    //FunctionDelegate *F = reinterpret_cast<FunctionDelegate *>(A->second.get());
                    FunctionDelegate *F = reinterpret_cast<FunctionDelegate *>(A->second);
                    if (F->fun != fun)
                        continue;
                    sinks.erase(A);
                    return;
                }
            }

            /// Remove an existing method delegate
            template <class C, bool D>
            void RemoveMethod(MethodObjectBase<C,D> const &bound)
            {
                typename Sinks::iterator A = sinks.begin(), B = sinks.end();
                for (; A != B; ++A)
                {
                    if (A->first != DelegateType::Method)
                        continue;
					// TODO shared_ptr
                    //MethodObjectBase<C,D> *M = reinterpret_cast<MethodObjectBase<C,D> *>(A->second.get());
                    MethodObjectBase<C,D> *M = reinterpret_cast<MethodObjectBase<C,D> *>(A->second);
                    if (M->object != bound.object || M->method != bound.method)
                        continue;
                    sinks.erase(A);
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
                sinks.push_back(ValueType(DelegateType::Event, new EventDelegate(ev)));
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
                typename Sinks::iterator A = sinks.begin(), B = sinks.end();
                for (; A != B; ++A)
                {
                    if (A->first != DelegateType::Event)
                        continue;
                    EventDelegate *M = reinterpret_cast<EventDelegate *>(A->second.get());
                    if (&M->ev != &ev)
                        continue;
                    sinks.erase(A);
                    return;
                }
            }
        };
    };
} } }

#endif // SCHLADETSCH_EVENTS_DETAIL_EVENT_H

//EOF
