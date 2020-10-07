/*
* Constructors and destructors do not have return types nor can they return values.
~ References and pointers cannot be used on constructors and destructors because their addresses cannot be taken.
! Constructors cannot be declared with the keyword virtual.
! Constructors and destructors cannot be declared static, const, or volatile.
! Unions cannot contain class objects that have constructors or destructors.
*/
#include <iostream>
using namespace std;

struct A
{
    virtual void f() { cout << "void A::f()" << endl; }
    virtual void g() { cout << "void A::g()" << endl; }
    virtual void h() { cout << "void A::h()" << endl; }
};

struct B : A
{
    virtual void f() { cout << "void B::f()" << endl; }
    B()
    {
        f();
        g();
        h();
    }
};

struct C : B
{
    virtual void f() { cout << "void C::f()" << endl; }
    virtual void g() { cout << "void C::g()" << endl; }
    virtual void h() { cout << "void C::h()" << endl; }
};

int main()
{
    C obj;
}
/*
The following is the output of the above example:
void B::f()
void A::g()
void A::h()
*/