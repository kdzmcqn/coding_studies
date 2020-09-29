#include <iostream>
using namespace std;


class people
{
public:
  void setname(string x) //function na pangset ng  private string ng 'name'
  {
    name = x;
  }

  void accessname() //function na pang-access sa private string
  {
    cout<<name;
  }
private:
  string name; //dito nilalagay variables sa classes para hindi mabago agad

};

int main()
{
string s;
cin>>s;
people key;
key.setname(s); //nilalagay yung string 's' sa string 'name' na nasa private class

cout<<"the string in the private class is: ";
key.accessname();

  return 0;
}
