#include <iostream>
using namespace std;

class A
{
private:
    int the_a;

public:
    A() { the_a = 0; }
    friend class B;
};

class B
{
private:
    int the_b;

public:
    void show_class_A(A &x)
    {
        cout << "A::the_a = " << x.the_a;
    }
};

int main()
{
    A some_a;
    B some_b;
    some_b.show_class_A(some_a);
    return 0;
}