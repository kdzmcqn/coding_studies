#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int r,n,x;
  vector<vector<int>> vec; //gumawa ka ng vector na laman ay vectors rin
  cin>>r;

  for(int i=0;i<r;i++)
  {
    vector<int> fill; //declare mo yung 'fill' na nasa loob ni 'vec'
    cin>>n;

    for(int j=0;j<n;j++)
    {
      cin>>x;
      fill.push_back(x); /*lalagyan mo ng elements yung 'fill' at index j*/
    }
    vec.push_back(fill); /*Ilalagay mo naman yung laman si 'fill' sa loob
    ni 'vec' at index i*/
  }

  for(int i=0;i<vec.size();i++)
  {
    for(int j=0;j<vec.at(i).size();j++)
    {
      cout<<vec[i][j]<<" ";
    }
    cout<<endl;
  }

cout<<vec[0][1]<<endl;
cout<<vec[1][3];

  return 0;
}
