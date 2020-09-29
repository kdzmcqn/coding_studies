#include <iostream>
#include <string>
using namespace std;

int x = 100; //global variable

int main()
{
string x = "local variable";
cout<<::x<<endl; //use :: para sa global variables
cout<<x<<endl; //pag walang ::, local variable pipiliin

system("pause");
return 0;
}
