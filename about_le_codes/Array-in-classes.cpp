#include <iostream>
//walang #include <bits/stdc++.h> sa visual studio

using namespace std;
/*applicable lang tong method na 'to sa 1 dimensional array'*/
class arrmanip
{
public:
//gagana yung mga functions kapag may input variable and array na may size
void store(int x, int array[])
{
int b;
  for(int i=0;i<x;i++)
  {
	  cout << "enter values: ";
	  cin>>b;
    array[i] = b; //pero pwede gumamit ng variable in accessing arrays
  }
  cout<<endl;
}

void get(int x, int array[])
  {
    for(int i=0;i<x;i++)
    {
      cout<<array[i]<<" ";
    }
  }
};

int main()
{
	cout << "array size = 5"<<endl;
int arr[5]; // sa visual studio, hindi pwede maglagay ng variable sa array; kaya vector dapat gamitin

arrmanip key;
key.store(5,arr); //kunin yung array size and array
key.get(5,arr); //no need na ilagay yung brackets dito

system("pause");
return 0;
}
// EOF