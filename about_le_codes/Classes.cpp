#include <iostream>

using namespace std;

class number //class na paglalagyan ng function
{
public: //functions/variables under public pwede gamitin kahit saan
  number() //constructor function tawag dito at walang return type
           //ginagamit to pangset ng initial variables
  {
    cout<<"this function runs automatically\n";
  }

  void even()
  {
   cout<<"Shit is even\n";
  }

  void odd()
  {
    cout<<"shit is odd\n";
  }

  void run();
private: //funcitons/varialbes under private sa class lang pwede gamitin
 //kelangan gumawa ng methods within the class para maaccess
};

void number::run() //function constructed outside of class pero wala dapat data type
{
  cout<<"This function uses the scope resolution operator";
}

int main()
{
  int a;
  number key; //gagawa ng 'susi' para ma-access yung funciton
  cin>>a;
  if(a%2 ==0)
  {
    key.even(); //eto yun 'object/instance/susi' pang-access sa function sa class
  }

  else
  {
  key.odd();
  }

  key.run();

  system("pause");
  return 0;
}
