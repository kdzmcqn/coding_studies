#include <iostream>
#include <vector>
using namespace std;

/*Sa class gagawin lahat ng vec manipulation*/

class vecops
{
public:
  void vecinput(int a, int b)
  {
    row = a;
    col = b;

    for(i=0;i<row;i++)
    {
      vector<int> vecin
      for(j=0;j<col;j++)
      {
        cin>>num;
        vecin.push_back(num);
      }
      vec.push_back(vecin);
    }
    vec.shrink_to_fit();
  }

  void vecout(int a, int b)
  {
    for(i=0;i<row;i++)
    {
      vector<int> vecin;
      for(j=0;j<col;j++)
      {
        cout<<vec[i][j]<<" ";
      }
      cout<<endl;
    }
  }

private:
int row,col,num,i,j;
vector<vector<int>> vec;
};


int main()
{
  int x,y;
  cin>>x>>y;
  vecops key;
  key.vecinput(x,y);
  key.vecout(x,y);

}
