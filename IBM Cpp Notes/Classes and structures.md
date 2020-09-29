The C++ class is an extension of the C language structure. Because the only difference between a structure and a class is that structure members have public access by default and class members have private access by default, you can use the keywords class or struct to define equivalent classes.

For example, in the following code fragment, the class X is equivalent to the structure Y:

CCNX10C
```cpp
class X {

  // private by default
  int a;

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