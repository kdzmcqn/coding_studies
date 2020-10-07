/*
      .-,---------------------------------------------------.
      |                    .---------------------------.    |
      V                    V                           |    |
>>-:----+-identifier-+--(----+-----------------------+-+--)-+--><
        '-class_name-'       '-assignment_expression-'
*/

#include <iostream>
using namespace std;

class B1
{
    int b;

public:
    B1() { cout << "B1::B1()" << endl; };

    // inline constructor
    B1(int i) : b(i) { cout << "B1::B1(int)" << endl; }
};
class B2
{
    int b;

protected:
    B2() { cout << "B2::B2()" << endl; }

    // noninline constructor
    B2(int i);
};
/*
* Include the initialization list as part of the constructor definition, not as part of the constructor declaration.
*/
// B2 constructor definition including initialization list
B2::B2(int i) : b(i) { cout << "B2::B2(int)" << endl; }

class D : public B1, public B2
{
    int d1, d2;

public:
    D(int i, int j) : B1(i + 1), B2(), d1(i)
    {
        cout << "D1::D1(int, int)" << endl;
        d2 = j;
    }
};

int main()
{
    D obj(1, 2);
}
/*
The output of this example : 
B1::B1(int)
B2::B2()
D1::D1(int, int)
*/