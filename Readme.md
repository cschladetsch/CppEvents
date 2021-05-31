# Cpp Events ![image](External/Icon.png)

[![CodeFactor](https://www.codefactor.io/repository/github/cschladetsch/CppEvents/badge)](https://www.codefactor.io/repository/github/cschladetsch/CppEvents)
[![License](https://img.shields.io/github/license/cschladetsch/CppEvents.svg?label=License&maxAge=86400)](./LICENSE.txt)
![Release](https://img.shields.io/github/release/cschladetsch/CppEvents.svg?label=Release&maxAge=60)

A fast and general multicast delegate/event (signals and slots) system for C++. This is inspired by .Net's delegates and events model. This is a single-header, self-contained unit of work that has no external depdencies. It does have external `boost` dependencies to *create* the header. But you don't need to create it - just use it as a single header inclusion. The pre-processed header file will work on anything after and including *Visual Studio 2009* or equivalent.

Events can be a function, a method, const or non-const, of any arity up to `SCHLADETSCH_EVENTS_ARITY_MAX`, which defaults to 8 but obviously can be overriden either in code or via compile-time switches.

See [webarchive](http://web.archive.org/web/20140719090331/http://www.altdev.co/2011/10/30/c-events/) for the original article, which also 
provides a detailed description of the library and architecture.

## Building the Header
Simply compiling the file `EventTest/Source/CreateHeader.cpp` will create [EventsP.hpp](https://github.com/cschladetsch/CppEvents/blob/master/EventsP.hpp), which is a single header that includes the entire library and has no external depandencies.

## Usage
Simply `#include "EventsP.hpp"`. You can grab the [single requried file](https://github.com/cschladetsch/CppEvents/blob/master/EventsP.hpp), build it from this repo, or get it from latest [Release](https://github.com/cschladetsch/CppEvents/releases/tag/v3.0).

See [usage](EventTest/EventTest.cpp) from the unit tests.

## Releases
I keep the library udated over the decades. See the Releases page.

## TODO
* Compare with new techniques available in C++ 11 plus.
* Leverage std::func<>.
* Runtime performance testing.
