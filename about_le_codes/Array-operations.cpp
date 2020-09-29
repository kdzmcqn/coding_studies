#include <iostream>
using namespace std;

int main()
{
int a,b;
int sum = 0;
cin>>a;
int arr[a];

for(int i=0;i<a;i++)
{
  cin>>b;
  arr[i]=b;
}

//single array operations
for(int i=0;i<a;i++)
{
  sum = sum + arr[i]; //pwede na rin diyan any array operations
}
cout<<sum<<endl<<endl;

/*array to array operations*/
int arr1[a];
for(int i=0;i<a;i++)
{
  cin>>b;
  arr1[i]=b;
}

for(int i=0;i<a;i++)
{
  sum = arr[i]+arr1[i];
//dapat pareho ng dimensions ng arrays for basic arithmetic operations
  cout<<sum<<" ";
}

return 0;
}

/*sa ibang file na lang yung basic matrix operations*/
