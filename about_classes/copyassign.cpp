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