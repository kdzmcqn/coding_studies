#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
  int arr[] = {5,4,3,2,1};
  for(int i:arr) //range based for loop iterates through the array
  {
    cout<<i<<endl;
  }
  cout<<endl;

  vector<int> v = {1,2,3,4,5};
  for (int i:v)
  {
    cout<<i<<endl;
  }

  system("pause");
  return 0;
}
