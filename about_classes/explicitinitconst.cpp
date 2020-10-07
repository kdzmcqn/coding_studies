// This example illustrates explicit initialization
// by constructor.

/*
>>-+-(--expression--)-------------------+----------------------><
   '-=--+-expression------------------+-'   
       |    .-,----------.           |     
       |    V            |           |     
       '-{----expression-+--+---+--}-'     
                            '-,-'          
*/
#include <iostream>
using namespace std;

class complx
{
    double re, im;

public:
    // default constructor
    complx() : re(0), im(0) {}

    // copy constructor
    complx(const complx &c)
    {
        re = c.re;
        im = c.im;
    }

    // constructor with default trailing argument
    complx(double r, double i = 0.0)
    {
        re = r;
        im = i;
    }

    void display()
    {
        cout << "re = " << re << " im = " << im << endl;
    }
};

int main()
{

    // initialize with complx(double, double)
    complx one(1);

    // initialize with a copy of one
    // using complx::complx(const complx&)
    complx two = one;

    // construct complx(3,4)
    // directly into three
    complx three = complx(3, 4);

    // initialize with default constructor
    complx four;

    // complx(double, double) and construct
    // directly into five
    complx five = 5;

    one.display();
    two.display();
    three.display();
    four.display();
    five.display();
}
/*
The above example produces the following output:
re = 1 im = 0
re = 1 im = 0
re = 3 im = 4
re = 0 im = 0
re = 5 im = 0
*/