# Cpp Events

[![CodeFactor](https://www.codefactor.io/repository/github/cschladetsch/CppEvents/badge)](https://www.codefactor.io/repository/github/cschladetsch/CppEvents)
[![License](https://img.shields.io/github/license/cschladetsch/CppEvents.svg?label=License&maxAge=86400)](./LICENSE.txt)
![Release](https://img.shields.io/github/release/cschladetsch/CppEvents.svg?label=Release&maxAge=60)

A fast and general multicast delegate/event (signals and slots) system for C++. This is inspired by .Net's delegates and events model. This is a single-header, self-contained unit of work that has no external depdancies to use. It does have external `boost` dependencies to *create*. But you don't need to create it - just use it as a single header inclusion.

Events can be a function, a method, const or non-const, of any arity up to `SCHLADETSCH_EVENTS_ARITY_MAX`, which defaults to 8 but obviously can be overriden either in code or via compile-time switches.

**Not currently supported**: lambda's and C\+\+11 functions. This library was written well before these things existed, and it could be improved/re-written based on C++ generic functions - pbly, and perhaps at a performance cost.

See [webarchive](http://web.archive.org/web/20140719090331/http://www.altdev.co/2011/10/30/c-events/) for the original article, which also 
provides a detailed description of the library and architecture.

## Building the Header
The file `EventTest/Source/CreateHeader.cpp` can be used to create [EventsP.hpp](https://github.com/cschladetsch/CppEvents/blob/master/EventsP.hpp), which is a single header that includes the entire library and had no external depandencies other than boost.

## Usage
Simply `#include "EventsP.hpp"`. You can grab the [single requried file](https://github.com/cschladetsch/CppEvents/blob/master/EventsP.hpp), build it from this repo, or get it from latest [Release](https://github.com/cschladetsch/CppEvents/releases/tag/v2.6).

There are no external dependencies to use the single-header library. See [usage](EventTest/EventTest.cpp) from the unit tests.

## Releases
I keep the library udated over the decades. See the Releases page.

## TODO
* Compare with new techniques available in C++ 11 plus
* Leverage std::func<>
* Runtime performance testing.
