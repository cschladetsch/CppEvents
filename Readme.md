# Cpp Events

[![CodeFactor](https://www.codefactor.io/repository/github/cschladetsch/CppEvents/badge)](https://www.codefactor.io/repository/github/cschladetsch/CppEvents)
[![License](https://img.shields.io/github/license/cschladetsch/CppEvents.svg?label=License&maxAge=86400)](./LICENSE.txt)
![Release](https://img.shields.io/github/release/cschladetsch/CppEvents.svg?label=Release&maxAge=60)

A fast and general multicast delegate/event (signals and slots) system for C++. This is inspired by .Net's delegates and events model.

Events can be a function, a method, const or non-const.

Not currently supported: lambda's and C\+\+11 functions. This library was written well before these things existed, and it could be improved/re-written based on C++ generic functions. Probably, and perhaps at performance cost

See [webarchive](http://web.archive.org/web/20140719090331/http://www.altdev.co/2011/10/30/c-events/) for the original article, which also 
provides a detailed description of the library and architecture.

## Building the Header
The file `EventTest/Source/CreateHeader.cpp` can be used to create `EventPP.h`, which is a single header that includes the entire library and had no external depandencies other than boost. This in available in the latest [Release](https://github.com/cschladetsch/CppEvents/releases/tag/v2.6).

## Usage
Simply `#include "EventP.hpp"`.

There are no external dependencies. See [usage](EventTest/EventTest.cpp) from the unit tests.

## TODO
Compare with new techniques available in C++ 11 plus, and leverage std::func<>.
