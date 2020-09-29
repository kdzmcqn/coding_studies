#include <iostream>
#include <vector>
using namespace std;

/*function pointers - way siya para ma-assign yung function sa variable

format:
1. functiontype(*functionname)(parameters) = variable name <- eto yung orig format
2. auto functionname = variable name <- using auto

bawal arrays sa parameters
*/

void display(int i) //eto yung function na dinedefine ng function pointer
{
  cout<<i<<endl;
}

void manip(vector<int> &v, void(*get)(int))//declare function pointer
{
  for(int i:v)
  get(i); //gagamitin yun
}

//output ng using auto
void display1(vector<int> &v)
{
  for(int i:v)
  cout<<i<<" ";
}

int main()
{
  vector<int>v = {1,2,3,4,5};
  manip(v,display); //ipapas yung vector 'v' and variable 'display' sa manip

  auto func = display1; //eto another method using auto
  func(v);
  
  system("pause");
  return 0;
}
