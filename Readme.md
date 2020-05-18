# Cpp Events

A fast and general multicast delegate/event (signals and slots) system for C++.

See http://web.archive.org/web/20140719090331/http://www.altdev.co/2011/10/30/c-events/ for the original article, which
provides a detailed description of the library.

Currently broken with VS2013 and latest boost. Will be fixed within days.

Update: the 'fix' was to not use shared\_ptr<>. So the project now builds and runs, but leaks.

This seems to be a problem with the new compiler, which cannot deduce correct argument types when using deeply nested (and auto-generated) templates when deducing types for shared\_ptr<>.

There are only a few spots in the code that is affected by this, all marked with // TODO shared\_ptr

## Building the Header

The file `EventTest/Source/CreateHeader.cpp` can be used to create `EventPP.h`, which is a single header that includes the entire library and had no external depandencies other than boost.

