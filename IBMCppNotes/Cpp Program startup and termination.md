A C++ program performs the same operations as does a C program at program startup and at program termination, plus a few more outlined here.

Before the target environment calls the function main, and after it stores any constant initial values you specify in all objects that have static duration, the program executes any remaining constructors for such static objects. The order of execution is not specified between translation units, but you can nevertheless assume that some iostreams objects are properly initialized for use by these static constructors. These control text streams:

- cin  for standard input
- cout  for standard output
- cerr  for unbuffered standard error output
- clog  for buffered standard error output
You can also use these objects within the destructors called for static objects, during program termination.

As with C, returning from main or calling exit calls all functions registered with atexit in reverse order of registry. An exception thrown from such a registered function calls terminate().