#include <iostream>
using namespace std;

/*
*ap - returns the value
ap - returns tha address
*/

void ppass(int *x);

int main()
{
int a;
cin>>a;
cout<<&a<<endl; //eto yung memory address ng kung saan nakastore yung 5

int *ap; //gumawa ng pointer
ap = &a; //yung value ng pointer variable is yung memory address ng 5
cout<<ap<<endl<<*ap<<endl<<endl; //kaya yung output dito is the same lang as nung una

/*ginagamit to kasi yung memory address is magkakahalo ng data types
i.e hindi siya int/char/ lang. so para store siya sa variable ginagamitan
ng pointers*/

ppass(&a); //so dito kukunin mo yung memory address using &
cout<<a;

system("pause");
return 0;
}

void ppass(int *x) //dito naman nirerequire yung laman nung memory address
{
  cin>>*x;
}
