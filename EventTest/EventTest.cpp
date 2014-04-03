//
// (C) 2011 Christian.Schladetsch@Gmail.com
//
// Test suite for event model
//

#include <string>
#include <iostream>
#include <assert.h>
#include <vector>

// this header uses various files from <boost/preprocessor>, and uses a fixed Schladetsch namespace
//#include "Schladetsch/Events/Event.h"

// change this to whatever namespace suits you (only supported when using EventP.h)
#define SCHLADETSCH_NAMESPACE YourNamespace

// this header only #includes <list> and puts all code in the variable SCHLADETSCH_NAMESPACE
// generated using boost_1.47
#include "Schladetsch/Events/EventP.h"

using namespace std;
using namespace YourNamespace::Events;    // if you use Event.h, rather than EventP.h, change this to Schladetsch::Events
//using namespace Schladetsch::Events;

template <class T>
T const &get(void *p)
{
    return *reinterpret_cast<T*>(p);
}

// helper for testing; stores when a method or function was called, and what arguments
// were given to the method or function.
struct Harness
{
    // we use these argument types for testing
    typedef void * Value;

    // called[0] means that a delegate with 0 arguments was called,
    // called[1] means that a delegate with 1 arguments was called, etc
    int called[8];

    // the values passsed to the delegate
    Value values[8];

    void Reset()
    {
        fill(called, called + 8, 0);
    }

    // assert that a 0-arity delegate was called
    void AssertCalled()
    {
        assert(called[0]);
    }

    // assert that a n-arity delegate was not called
    void AssertNotCalled(int n)
    {
        assert(!called[n]);
    }

    // assert that a 1-arity delegate was called,
    // and that the argument passed to it was the same
    // as the argument passed to this method
    template <class T0>
    void AssertCalled(T0 t0)
    {
        assert(called[1]);
        //assert(get<T0>(values[0]) == t0);
    }

    // assert that a 2-arity delegate was called,
    // and that the arguments passed to it are the same
    // as the arguments to this method
    template <class T0, class T1>
    void AssertCalled(T0 t0, T1 t1)
    {
        assert(called[2]);
        //assert(get<T0>(values[0]) == t0);
        //a/ssert(get<T1>(values[1]) == t1);
    }
} G;

string foo("foo");
string bar("bar");

void F0()
{
    G.called[0]++;
}

void F1(int n)
{
    G.called[1]++;
    //G.values[0] = n;
}

void F2(int n, string s)
{
    G.called[2]++;
    //G.values[0] = n;
    //G.values[1] = s;
}

void TestFunctions()
{
    // an event with no arguments
    Event<> e0;

    // reset the harness, add the F0 function as a delegate to the event,
    // call the event, and assert that F0 was in fact called when the event fired
    G.Reset();
    e0.Add(F0);
    e0();
    G.AssertCalled();

    // reset the harness, remove the F0 function as a delegate to the event,
    // call the event, and assert that F0 wasn't called when the event fired
    G.Reset();
    e0.Remove(F0);
    e0();
    G.AssertNotCalled(0);

    // make a new event with one integer argument
    // reset the harness, add the F1 function to the event, and fire it.
    // assert that F1 was called and that it received '42' as an argument
    Event<int> e1;
    G.Reset();
    e1.Add(F1);
    e1(42);
    G.AssertCalled(42);

    // remove F1 from the event, fire it, and assert that F1 was not called
    G.Reset();
    e1.Remove(F1);
    e1(42);
    G.AssertNotCalled(1);

    // make an event that takes two arguments: an integer and a string.
    // add the F2 function as a delegate to the event, fire it, and
    // assert that F2 was called with the correct aguments
    Event<int, string> e2;
    G.Reset();
    e2.Add(F2);
    e2(123, foo);
    G.AssertCalled(123, foo);

    // remove F2 from the e2 event, fire it, and assert that F2 wasn't called
    G.Reset();
    e2.Remove(F2);
    e2(123, foo);
    G.AssertNotCalled(2);
}


struct Test
{
    void M0()
    {
        G.called[0]++;
    }

    void M1(int n)
    {
        G.called[1]++;
        //G.values[0] = n;
    }

    void M2(int n, string s)
    {
        G.called[2]++;
        //G.values[0] = n;
        //G.values[1] = s;
    }

    void CM0() const
    {
        G.called[0]++;
    }

    void CM1(int n) const
    {
        G.called[1]++;
        //G.values[0] = n;
    }

    void CM2(int n, string s) const
    {
        G.called[2]++;
        //G.values[0] = n;
        //G.values[1] = s;
    }

    void RM1(int &n) const
    {
        G.called[1]++;
        //G.values[0] = n;
    }

    void RM2(int &n, const string& s) const
    {
        G.called[2]++;
        //G.values[0] = n;
        //G.values[1] = s;
    }
};

void TestMethods()
{
    // the servant object instance, providing method event delegates
    Test s;

    // an event with no arguments
    Event<> e0;

    // reset the harness, add the F0 function as a delegate to the event,
    // call the event, and assert that F0 was in fact called when the event fired
    G.Reset();
    e0.Add(s, &Test::M0);
    e0();
    G.AssertCalled();

    // reset the harness, remove the F0 function as a delegate to the event,
    // call the event, and assert that F0 wasn't called when the event fired
    G.Reset();
    e0.Remove(s, &Test::M0);
    e0();
    G.AssertNotCalled(0);

    // make a new event with one integer argument
    // reset the harness, add the F1 function to the event, and fire it.
    // assert that F1 was called and that it received '42' as an argument
    Event<int> e1;
    G.Reset();
    e1.Add(s, &Test::M1);
    e1(42);
    G.AssertCalled(42);

    // remove F1 from the event, fire it, and assert that F1 was not called
    G.Reset();
    e1.Remove(s, &Test::M1);
    e1(42);
    G.AssertNotCalled(1);

    // make an event that takes two arguments: an integer and a string.
    // add the F2 function as a delegate to the event, fire it, and
    // assert that F2 was called with the correct aguments
    Event<int, string> e2;
    G.Reset();
    e2.Add(s, &Test::M2);
    e2(123, foo);
    G.AssertCalled(123, foo);

    // remove F2 from the e2 event, fire it, and assert that F2 wasn't called
    G.Reset();
    e2.Remove(s, &Test::M2);
    e2(123, foo);
    G.AssertNotCalled(2);
}

void TestConstMethods()
{
    // the servant object instance, providing method event delegates
    Test s;

    // an event with no arguments
    Event<> e0;

    // reset the harness, add the F0 function as a delegate to the event,
    // call the event, and assert that F0 was in fact called when the event fired
    G.Reset();
    e0.Add(s, &Test::CM0);
    e0();
    G.AssertCalled();

    // reset the harness, remove the F0 function as a delegate to the event,
    // call the event, and assert that F0 wasn't called when the event fired
    G.Reset();
    e0.Remove(s, &Test::CM0);
    e0();
    G.AssertNotCalled(0);

    // make a new event with one integer argument
    // reset the harness, add the F1 function to the event, and fire it.
    // assert that F1 was called and that it received '42' as an argument
    Event<int> e1;
    G.Reset();
    e1.Add(s, &Test::CM1);
    e1(42);
    G.AssertCalled(42);

    // remove F1 from the event, fire it, and assert that F1 was not called
    G.Reset();
    e1.Remove(s, &Test::CM1);
    e1(42);
    G.AssertNotCalled(1);

    // make an event that takes two arguments: an integer and a string.
    // add the F2 function as a delegate to the event, fire it, and
    // assert that F2 was called with the correct aguments
    Event<int, string> e2;
    G.Reset();
    e2.Add(s, &Test::CM2);
    e2(123, foo);
    G.AssertCalled(123, foo);

    // remove F2 from the e2 event, fire it, and assert that F2 wasn't called
    G.Reset();
    e2.Remove(s, &Test::CM2);
    e2(123, foo);
    G.AssertNotCalled(2);
}

void TestReferenceArgs()
{
    Test s;
    int n = 42;
    string bar("bar");

    Event<int &> e1;
    G.Reset();
    e1.Add(s, &Test::RM1);
    e1(n);
    G.AssertCalled(n);

    G.Reset();
    e1.Remove(s, &Test::RM1);
    e1(n);
    G.AssertNotCalled(1);

    Event<int &, const string &> e2;
    e2.Add(s, &Test::RM2);
    e2(n, bar);
    G.AssertCalled(n, bar);
}

void TestChainingEvents()
{
    Event<int, string> e2, d2;

    G.Reset();

    // chain events together: when e2 is fired, it will also fire d2, which in turn will invoke the function F2
    e2.Add(d2);
    d2.Add(F2);

    // invoke e2: this will fire d2 which will call the funciont F2
    e2(42, foo);
    G.AssertCalled(42, foo);

    // remove the d2 event from e2's delegates, fire e2, and assert that F2 isn't called this time
    G.Reset();
    e2.Remove(d2);
    e2(42, foo);
    G.AssertNotCalled(2);
}

void TestCopying()
{
    // test assigning one event to another.
    // in this test we will add a delegate to e1, then assign e1 to d1, fire d1, and ensure
    // that the delegate added to e1 is then fired
    Event<int> e1, d1;

    // add the F1 function delegate to event e1, then assign e1 to d1
    e1.Add(F1);
    d1 = e1;

    // ensure that when we fire d1, the F1 function delegate is called
    G.Reset();
    d1(42);
    G.AssertCalled(1);

    // test copy construction with events with two arguments. the other arity cases work by rule of induction
    Event<int, string> e2;
    e2.Add(F2);
    Test t;
    e2.Add(t, &Test::M2);

    Event<int, string> d2(e2);
    G.Reset();
    d2(123, bar);
    assert(G.called[2] == 2);
}

int main()
{
    TestFunctions();

    TestMethods();

    TestChainingEvents();
    
    TestCopying();

    TestConstMethods();

    TestReferenceArgs();

    cout << "passed\n";

    return 0;
}

//EOF
