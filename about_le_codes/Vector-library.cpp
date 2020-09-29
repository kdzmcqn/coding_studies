#include <iostream>
#include <vector> //declare yung lib
using namespace std; //pag wala to gagamitan pa ng std:: yung mga functions

/*
vector<data type> name - creates a vector labeled name
vector<int> vec(x,0) - (x,0) laman ng vector is x integers of value 0
name[n] or name.at(n) - access the element of the nth in the vec
name.push_back(n) - puts n in empty vector 'name'
name.size() - return the vector size
name.begin() - babasahin yung vector starting from the first element
name.end() - babasahin yung vector starting from the last element
name.insert(i, n) - inserts n before index i of vector 'name'; mareresize rin after
name.erase(i) - removes element in index i of vector 'name'; mareresize rin after
name.clear() - icclear yung laman ng vector
name.empty() - ichecheck kung walang nang laman (boolean 1 pag wala 0 pag meron)
*/

int main()
{
  int x,y;
  cout<<"Input vector sizes: ";
  cin>>x;
  vector<int> vec(x,0);

  cout<<"vec size: "<<vec.size()<<endl;
  for(int i=0;i<x;i++)
  {
    cout<<vec.at(i)<<" ";
  }
  cout<<endl;

  cout<<"\nInput elements for vec1\n";
  vector<int> vec1;
  for(int i=0;i<x;i++)
  {
    cin>>y;
    vec1.push_back(y);
  }

  cout<<"\nvec1 size: "<<vec1.size()<<endl;
  for(int i=0;i<x;i++)
  {
    cout<<vec1.at(i)<<" ";
  }

  cout<<"\n\nReplace values of vec: \n";
  for(int i=0;i<x;i++)
  {
    cin>>y;
    vec.at(i) = y;
  }

  cout<<"\nvec size: "<<vec.size()<<endl;
  for(int i=0;i<x;i++)
  {
    cout<<vec.at(i)<<" ";
  }

  cout<<"\n\nerasing element 2 in vec1:\n";
  vec1.erase(vec1.begin()+1);
  cout<<"\nvec1 size: "<<vec1.size()<<endl;

  for(unsigned int i=0;i<vec1.size();i++)
  {
    cout<<vec1.at(i)<<" ";
  }

  cout<<"\n\nInsert element at vec1 at the end: \n";
  cin>>y;
  vec1.insert(vec1.end(),y);
  cout<<"\nvec1 size: "<<vec1.size()<<endl;

  for(int i=0;i<vec1.size();i++)
  {
    cout<<vec1.at(i)<<" ";
  }

  cout<<"\n\nCheck if vec is empty by using name.empty(): \n";
  cout<<vec.empty()<<endl;

  cout<<"\nErasing vec using name.clear(): "<<endl;
  vec.clear();

  cout<<"\nCheck again if vec is empty by using name.empty(): \n";
  cout<<vec.empty()<<endl;

  for(int i=0;i<x;i++)
  {
    cout<<vec.at(i)<<" ";
  }
  return 0;
}
