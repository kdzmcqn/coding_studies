#include <iostream>
using namespace std;

void out(int x,int array[]); //function prototyping lang

int main()
{
int arr[5];

out(5,arr); //dito arr na lang no need to include []

return 0;
}

/*yung array operations pwedeng ilagay sa ibang function*/
void out(int x,int array[]) //pero sa fuction dapat included yung []
{
cout<<"enter matix elements: "<<endl;
int c;
  for(int i=0;i<x;i++) //sa ibang function giagawa yung storing
  {
    cin>>c;
    array[i]=c;
  }
}

/*note: yung method na yan hindi pwede sa higher-dimensioned arrays. May ibang
way para gawin yun*/
