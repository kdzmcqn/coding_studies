You must initialize the following cases with an initializer list:

- base classes with no default constructors,
- reference data members,
- non-static const data members, or
- a class type which contains a constant data member.

The following example demonstrates this:

```cpp
class A {
public:
  A(int) { }
};

class B : public A {
  static const int i; // no need to be in the init list
  const int j;
  int &k;
public:
  B(int& arg) : A(0), j(1), k(arg) { } // init list
};

int main() {
  int x = 0;
  B obj(x);
};
```

The data members j and k, as well as the base class A must be initialized in the initializer list of the constructor of B.

You can use data members when initializing members of a class. The following example demonstrate this:

```cpp
struct A {
  int k;
  A(int i) : k(i) { }
};
struct B: A {
  int x;
  int i;
  int j;
  int& r;
  B(int i): r(x), A(i), j(this->i), i(i) { }
};
```

The constructor `B(int i)` initializes the following items:
`B::r` to refer to `B::x`
Class A with the value of the argument to `B(int i)`
`B::j` with the value of `B::i`
`B::i` with the value of the argument to `B(int i)`
