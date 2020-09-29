The Standard C++ Library consists of 40 headers. Of these 40 headers, 15 constitute the Standard Template Library, or STL. 10 were added or updated with C++ Technical Report 1, or TR1. These are indicated below with the notations (STL) and (TR1):
```cpp
<algorithm>   (STL) for defining numerous templates that implement useful algorithms
<array>   (TR1) for defining a fixed-size array with a container-like interface
<bitset>   for defining a template class that administers sets of bits
<complex>   for defining a template class that supports complex arithmetic
<deque>   (STL) for defining a template class that implements a deque container
<exception>   for defining several functions that control exception handling
<fstream>   for defining several iostreams template classes that manipulate exteral files
<functional>   (STL) / (TR1) for defining several templates that help construct predicates for the templates defined in <algorithm> and <numeric>
<iomanip>   for declaring several iostreams manipulators that take an argument
<ios>   for defining the template class that serves as the base for many iostreams classes
<iosfwd>   for declaring several iostreams template classes before they are necessarily defined
<iostream>   for declaring the iostreams objects that manipulate the standard streams
<istream>   for defining the template class that performs extractions
<iterator>   (STL) for defining several templates that help define and manipulate iterators
<limits>   for testing numeric type properties
<list>   (STL) for defining a template class that implements a list container
<locale>   for defining several classes and templates that control locale-specific behavior, as in the iostreams classes
<map>   (STL) for defining template classes that implement associative containers that map keys to values
<memory>   (STL) / (TR1) for defining templates that use reference counting to manage resources
<new>   for declaring several functions that allocate and free storage
<numeric>   (STL) for defining several templates that implement useful numeric functions
<ostream>   for defining the template class that performs insertions
<queue>   (STL) for defining a template class that implements a queue container
<random>   (TR1) for defining random number generators
<regex>   (TR1) for defining a template class to parse regular expressions and several template classes and functions to search text for matches to a regular expression object
<set>   (STL) for defining template classes that implement associative containers
<sstream>   for defining several iostreams template classes that manipulate string containers
<stack>   (STL) for defining a template class that implements a stack container
<stdexcept>   for defining several classes useful for reporting exceptions
<streambuf>   for defining template classes that buffer iostreams operations
<string>   for defining a template class that implements a string container
<strstream>   for defining several iostreams classes that manipulate in-memory character sequences
<typeinfo>   for defining class type_info, the result of the typeid operator
<type_traits>   (TR1) for accessing detailed type information at compile time to support generic programming
<tuple>   (TR1) for defining a template tuple whose instances hold objects of varying types
<unordered_map>   (STL) / (TR1) for defining template classes that implement unordered associative containers that map keys to values
<unordered_set>   (STL) / (TR1) for defining template classes that implement unordered associative containers
<utility>   (STL) / (TR1) for defining two tuple-like templates that provide information about the contents of instances of std::pair
<valarray>   for defining several classes and template classes that support value-oriented arrays
<vector>   (STL) for defining a template class that implements a vector container
```

Copyright note
Certain materials included or referred to in this document are copyright P.J. Plauger and/or Dinkumware, Ltd. or are based on materials that are copyright P.J. Plauger and/or Dinkumware, Ltd.

Certain materials included or referred to in this document are copyright Hewlett-Packard Company or are based on materials that are copyright Hewlett-Packard Company.

Notwithstanding the meta-data for this document, copyright information for this document is as follows:

Copyright   IBM Corp. 1999, 2013. & Copyright   P.J. Plauger and/or Dinkumware, Ltd. 1992-2006. & Copyright   1994 Hewlett-Packard Company.

Parent topic: Standard C++ Library Overview