#include <iostream>
using namespace std;

/* ternary operator:
(comparison here) ? (do if true) : (do if false) */

int main()
{
  int a,b;
  cin>>a>>b;
  (a>b) ? a++:b++; //ternary operator
  cout<<endl<<a<<endl<<b;
  
  system("pause");
  return 0;
}
