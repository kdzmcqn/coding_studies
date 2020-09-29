#include <iostream>
#include <string> 
using namespace std;

/*sa funtion overloading, repetitive mong gagamitin yung single function
para makatipid sa variables/memory*/

void out(int x) /*declare mo kung anong datatype papapasukin mo sa function*/
{
  cout<<"the integer is: "<<x<<endl;
}

void out(float x) //dito float lang
{
  cout<<"the float is: "<<x<<endl;
}

void out(char x) //similar for the rest of dis shit
{
  cout<<"the character is: "<<x<<endl;
}

void out(string x)
{
  cout<<"the string is: "<<x<<endl;
}

void out(double x)
{
  cout<<"the double is: "<<x<<endl;
}

void out(bool x)
{
  cout<<"the boolean is: "<<x<<endl;
}

int main()
{
  int a = 781; // up to 10 digits
  float b = 123.59234; // basta malaki to hanggang decimal
  char c = 'e'; //sa atom pwedeng nakastring to pero last character lang kinukuha
  string d = "some string"; // multiple characters with spaces
  double e = 121.1434; //medj mas maliit sa float
  bool f = true;

// look at dis shit: diff data types pero iisang function lang
  out(a);
  out(b);
  out(c);
  out(d);
  out(e);
  out(f);

  system("pause");
return 0;
}
