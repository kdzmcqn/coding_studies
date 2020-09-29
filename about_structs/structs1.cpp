#include <iostream>
using namespace std;

/*
* Structs are not really supposed to have
* funtionality
*
* Structure that just represent variables
* Plain old data
* The Vector below is just a representation of int and double.
* 
* We just grouping variables.
*
* Not adviced for inheritance or hierarchies, use class nalang.
*/

struct Vector
{
    int sz;
    double *elem;
};

void vector_init(Vector &v, int s) // does not return anything, void 'to, 'di ba?
{
    v.elem = new double[s];
    v.sz = s;
}

void access_vector(Vector v, Vector &rv, Vector *pv)
{
    int i1 = v.sz;   // access through name
    int i2 = rv.sz;  // access through reference
    int i4 = pv->sz; // access through pointer
    cout << "accessing size...\n"
         << "through name: " << i1 << "\n"
         << "through reference: " << i2 << "\n"
         << "through pointer: " << i4 << endl;
}

int main()
{
    Vector vec, *ptr;
    ptr = &vec;
    const int size = 5;
    vector_init(vec, size);
    for (int i = 0; i != 5; ++i)
        cin >> vec.elem[i]; // ? debug, *(vec).elem@5

    access_vector(vec, vec, ptr); // ? *ptr.elem@5
    return 0;
}