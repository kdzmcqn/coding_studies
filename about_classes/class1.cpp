#include <iostream>
using namespace std;
/*
 * It's the syntax for initializing members of the class and it is valid when using constructors. 
 * It is called initializer list and it follows the geneal syntax:
 ~ class_name(type1 arg1, type2 arg2, type3 arg3): member1(arg1), member2(arg2), member3(arg3){}
*/
class Vector
{
private:
    double *elem;
    int sz;

public:
    Vector(int s) : elem{new double[s]}, sz{s} {} // construct a vector
    double &operator[](int i) { return elem[i]; } // element access: subscripting
    int size() { return sz; }
};
/*
~ :elem{new double[s]}, sz{s}
* We first initialize elem with a pointer to s elements of type double
* obtained from the free store. Then, we initialize sz to s.

* access to elements is provided by a subscript function, called
~ operator[]
* it returns a reference to the appropriate element (a double&).
*/
double read_and_sum(int n)
{
    Vector v(n); // create vector of n elements
    for (int i = 0; i != v.size(); ++i)
        cin >> v[i]; // read into elements

    double sum = 0;
    for (int i = 0; i != v.size(); ++i)
        sum += v[i]; // take sum of the elements
    return sum;
}

int main()
{
    Vector vec(6); // vector w/ 6 elemensts
    auto sums = read_and_sum(2);
    cout << sums << endl;
    return 0;
}