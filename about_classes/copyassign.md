The copy assignment operator lets you create a new object from an existing one by initialization. A copy assignment operator of a class A is a nonstatic non-template member function that has one of the following forms:

- `A::operator=(A)`
- `A::operator=(A&)`
- `A::operator=(const A&)`
- `A::operator=(volatile A&)`
- `A::operator=(const volatile A&)`

If you do not declare a copy assignment operator for a class A, the compiler will implicitly declare one for you that is inline public.

The following example demonstrates implicitly defined and user-defined copy assignment operators:

```cpp
#include <iostream>
using namespace std;

struct A
{
    A &operator=(const A &)
    {
        cout << "A::operator=(const A&)" << endl;
        return *this;
    }

    A &operator=(A &)
    {
        cout << "A::operator=(A&)" << endl;
        return *this;
    }
};
class B
{
    A a;
};

struct C
{
    C &operator=(C &)
    {
        cout << "C::operator=(C&)" << endl;
        return *this;
    }
    C() {}
};

int main()
{
    B x, y;
    x = y;

    A w, z;
    w = z;

    C i;
    const C j();
    // i = j;
}

```

See the output of the above example:

```
A::operator=(const A&)
A::operator=(A&)
```

The assignment `x = y` calls the implicitly defined copy assignment operator of B, which calls the user-defined copy assignment operator `A::operator=(const A&)`. The assignment `w = z` calls the user-defined operator `A::operator=(A&)`. The compiler will not allow the assignment `i = j` because an operator `C::operator=(const C&)` has not been defined.

The implicitly declared copy assignment operator of a class A will have the form `A& A::operator=(const A&)` if the following statements are true:

- A direct or virtual base B of class A has a copy assignment operator whose parameter is of type const B&, const volatile B&, or B.
- A non-static class type data member of type X that belongs to class A has a copy constructor whose parameter is of type const X&, const volatile X&, or X.

If the above are not true for a class A, the compiler will implicitly declare a copy assignment operator with the form A& A::operator=(A&).

The implicitly declared copy assignment operator returns an lvalue reference to the operator's argument.

The copy assignment operator of a derived class hides the copy assignment operator of its base class.

The compiler cannot allow a program in which a copy assignment operator for a class A is implicitly defined C++11 beginsor explicitly defaultedC++11 ends when one or more of the following conditions are true:

- Class A has a nonstatic data member of a const type or a reference type
- Class A has a nonstatic data member of a type which has an inaccessible copy assignment operator
- Class A is derived from a base class with an inaccessible copy assignment operator.

An implicitly defined copy assignment operator of a class A will first assign the direct base classes of A in the order that they appear in the definition of A. Next, the implicitly defined copy assignment operator will assign the nonstatic data members of A in the order of their declaration in the definition of A.
