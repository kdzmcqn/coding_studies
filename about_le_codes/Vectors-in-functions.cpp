#include <iostream>
#include <vector>
using namespace std;

/*VECTORS AS PARAMETERS
NOTE: dapat laging pinapasa yung mga arrays/vectors/containters by reference
kasi it takes up a lot of memory kung hindi*/


void vecfill(vector<int>&); // IMPORTANT always pass vectors/arrays by reference
void vecprint(const vector<int>&); //'const' para hindi maedit yung content ng vec
int i,size; // global variable para ma-access sa lahat ng functions


int main()
{
  vector<int> vec;
  vecfill(vec); //declare the name of the vector
  vecprint(vec);

  return 0;
}

void vecfill(vector<int>& newvec) //passing by reference saves memory
{
  int num;
  cin>>::size;

    for(::i=0;::i<::size;::i++)
    {
      cin>>num;
      newvec.push_back(num);
    }
  cout<<endl;
}

void vecprint(const vector<int>& newvec) //sa memory nakastore kaya pweds iaccess
{
  for(::i=0;::i<::size;::i++)
  {
    cout<<newvec.at(i)<<" ";
  }
cout<<endl;
}
