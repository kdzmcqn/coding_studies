The Standard C++ Library can be categorized as follows:

The Language Support Library
The Diagnostics Library
The General Utilities Library
The Standard String Templates
Localization Classes and Templates
The Containers, Iterators and Algorithms Libraries (the Standard Template Library)
The Standard Numerics Library
The Standard Input/Output Library
C++ Headers for the Standard C Library
C++ Headers added with TR1
The Language Support Library The Language Support Library defines types and functions that will be used implicitly by C++ programs that employ such C++ language features as operators new and delete, exception handling and runtime type information (RTTI).

Standard C++ header	Equivalent in previous versions

`<exception>`	
no equivalent

`<limits>`	no equivalent
`<new>	<new.h>`
`<typeinfo>`
no equivalent

The Diagnostics Library The Diagnostics Library is used to detect and report error conditions in C++ programs.

Standard C++ header	Equivalent in previous versions
<stdexcept>	
no equivalent

The General Utilities Library The General Utilities Library is used by other components of the Standard C++ Library, especially the Containers, Iterators and Algorithms Libraries (the Standard Template Library).

Standard C++ header	Equivalent in previous versions
<utility>	no equivalent
<functional>	no equivalent
<memory>	no equivalent
The Standard String Templates The Strings Library is a facility for the manipulation of character sequences.

Standard C++ header	Equivalent in previous versions
<string>	no equivalent
Localization Classes and Templates The Localization Library permits a C++ program to address the cultural differences of its various users.

Standard C++ header	Equivalent in previous versions
<locale>	no equivalent
The Containers, Iterators and Algorithms Libraries (the Standard Template Library) The Standard Template Library (STL) is a facility for the management and manipulation of collections of objects.

Standard C++ header	Equivalent in previous versions
<algorithm>	no equivalent
<bitset>	no equivalent
<deque>	no equivalent
<iterator>	no equivalent
<list>	no equivalent
<map>	no equivalent
<queue>	no equivalent
<set>	no equivalent
<stack>	no equivalent
<unordered_map>	no equivalent
<unordered set>	no equivalent
<vector>	no equivalent
The Standard Numerics Library The Numerics Library is a facility for performing seminumerical operations.

Users who require library facilities for complex arithmetic but want to maintain compatibility with older compilers may use the compatibility complex numbers library whose types are defined in the non-standard header file <complex.h>. Although the header files <complex> and <complex.h> are similar in purpose, they are mutually incompatible.

Standard C++ header	Equivalent in previous versions
<complex>	no equivalent
<numeric>	no equivalent
<valarray>	no equivalent
The Standard Input/Output Library The standard iostreams library differs from the compatibility iostreams in a number of important respects. To maintain compatibility between such a product and VisualAge� C++ Version 5.0 or z/OS� C/C++ Version 1.2, use instead the compatibility iostreams library.

Standard C++ header	Equivalent in previous versions
<fstream>	no equivalent
<iomanip>	no equivalent
<ios>	no equivalent
<iosfwd>	no equivalent
<iostream>	no equivalent
<istream>	no equivalent
<ostream>	no equivalent
<streambuf>	no equivalent
<sstream>	no equivalent
<strstream>	no equivalent
C++ Headers for the Standard C Library The 1990 C International Standard specifies 18 headers which must be provided by a conforming hosted implementation. The name of each of these headers is of the form name.h. The C++ Standard Library includes the 1990 C Standard Library and, hence, includes these 18 headers. Additionally, for each of the 18 headers specified by the 1990 C International Standard, the C++ standard specifies a corresponding header that is functionally equivalent to its C library counterpart, but which locates all of the declarations that it contains within the std namespace. The name of each of these C++ headers is of the form cname, where name is the string that results when the �.h� extension is removed from the name of the equivalent C Standard Library header. For example, the header files <stdlib.h> and <cstdlib> are both provided by the C++ Standard Library and are equivalent in function, with the exception that all declarations in <cstdlib> are located within the std namespace.

Standard C++ header	Corresponding Standard C & C++ Header
<cassert>	<assert.h>
<cctype>	<ctype.h>
<cerrno>	<errno.h>
<cfloat>	<float.h>
<ciso646>	<iso646.h>
<climits>	<limits.h>
<clocale>	<locale.h>
<cmath>	<math.h>
<csetjmp>	<setjmp.h>
<csignal>	<signal.h>
<cstdarg>	<stdarg.h>
<cstddef>	<stddef.h>
<cstdio>	<stdio.h>
<cstdlib>	<stdlib.h>
<cstring>	<string.h>
<ctime>	<time.h>
<cwchar>	<wchar.h>
<cwctype>	<wctype.h>
C++ Headers added with TR1: The following headers are added with TR1.
Standard C++ Header
<array>
<random>
<regex>
<type_traits>
<tuple>
<unordered_map>
<unordered_set>