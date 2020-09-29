#include <iostream> //dito yung cin & cout functions
#include <string> //dito yung sa string library
using namespace std;

void usecin();
void usegl();
void usecon();

int main()
{
  usecin();
  cin.ignore(); //para iignore yung \n na command before magread yung getline
  usegl();
  usecon();

  return 0;
}

void usecin()
{
  string x;
  cin>>x; //kukunin lahat ng nasa input stream
  cout<<x<<endl<<endl;
}

void usegl()
{
  string y;
  getline(cin,y); //kukunin lang hanggan sa first whitespace
  cout<<y<<endl<<endl;
}

void usecon()
{
  string a,b,sum;
  cin>>a>>b;

  //eto yung sinasabi na concatenation. parang nag-aadd ka lang sa strings
  sum = a + b;
  a += " ";
  a += b;

  cout<<sum<<endl<<a<<endl<<endl;
  system("pause");
}
