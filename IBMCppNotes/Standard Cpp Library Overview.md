The C++ class is an extension of the C language structure. Because the only difference between a structure and a class is that structure members have public access by default and class members have private access by default, you can use the keywords class or struct to define equivalent classes.

For example, in the following code fragment, the class X is equivalent to the structure Y:

CCNX10C

```cpp
class X {

  // private by default
  int a;
```

The Standard C++ Library is supplied by IBM, and this manual is based on the Dinkum C++ Library and the Dinkum C++ Library Reference.

Use of this Dinkum C++ Library Reference is subject to limitations. See the Dinkumware Notices and the IBM Notices for detailed restrictions. Also, see the specific copyright notice at the bottom of this page.

A C++ program can call on a large number of functions from the Dinkum C++ Library, a conforming implementation of the Standard C++ Library. These functions perform essential services such as input and output. They also provide efficient implementations of frequently used operations. Numerous function and class definitions accompany these functions to help you to make better use of the library. Most of the information about the Standard C++ Library can be found in the descriptions of the C++ library headers that declare or define library entities for the program. The C++ library headers have two broader subdivisions, iostreams headers and STL headers.

The Standard C++ Library works in conjunction with the headers from the Standard C Library. For information about the Standard C Library, refer to the documentation that is supplied with the operating system.

A few special conventions are introduced into this document specifically for this particular implementation of the Standard C++ Library. Not all implementations support all the features described here. Hence, this implementation introduces macros, or alternative declarations, where necessary to provide reasonable substitutes for the capabilities required by the C++ Standard.

The Standard C++ Library is based on the C++03 standard and has not been updated to C++0x. The C++0x library functions will be updated in a future release.

Other information about the Standard C++ Library includes:

Multibyte Characters
How to convert between multibyte characters and wide characters.
Files and Streams
How to read and write data between the program and files.
Formatted Output
How to generate text under control of a format string.
Formatted Input
How to scan and parse text under control of a format string.
STL Conventions
How to read the descriptions of STL template classes and functions.
Containers
How to use an arbitrary STL container template class.
Copyright notice
Certain materials included or referred to in this document are copyright P.J. Plauger and/or Dinkumware, Ltd. or are based on materials that are copyright P.J. Plauger and/or Dinkumware, Ltd. Also, copyright in portions of the software described in this document, and in portions of the documentation itself, is owned by Hewlett-Packard Company. The following statement applies to those portions of the software and documentation:

Copyright � 1994 Hewlett-Packard Company.
Permission to use, copy, modify, distribute and sell this software and its
documentation for any purpose is hereby granted without fee, provided that
the above copyright notice appear in all copies and that both that copyright
notice and this permission notice appear in supporting documentation.  
Hewlett-Packard Company makes no representations about the suitability of
this software for any purpose. It is provided "as is" without express or
implied warranty.

Notwithstanding any statements in the body of the document, IBM Corp. makes no representations of any kind as to which portions of the software and/or documentation are subject to Hewlett-Packard Company copyright.

Notwithstanding the meta-data for this document, copyright information for this document is as follows:

Copyright � IBM Corp. 1999, 2013. & Copyright � P.J. Plauger and/or Dinkumware, Ltd. 1992-2006. & Copyright � 1994 Hewlett-Packard Company.

Header files overview
Using C++ Library Headers
Standard C++ Library Conventions
Iostreams Conventions
C++ Program Startup and Termination

```cpp
public:

  // public member function
  int f() { return a = 5; };
};

struct Y {

  // public by default
  int f() { return a = 5; };

private:

  // private data member
  int a;
};
```

If you define a structure and then declare an object of that structure using the keyword class, the members of the object are still public by default. In the following example, main() has access to the members of obj_X even though obj_X has been declared using an elaborated type specifier that uses the class key class:

CCNX10D

```cpp
#include <iostream>
using namespace std;

struct X {
 int a;
 int b;
};

class X obj_X;

int main() {
  obj_X.a = 0;
  obj_X.b = 1;
  cout << "Here are a and b: " << obj_X.a << " " << obj_X.b << endl;
}
```

See the output of the above example:
Here are a and b: 0 1
