#include <iostream>
#include <string>
using namespace std;

struct people //structs can store variables of different types
{
  char name[50]; //these are called members
  int age = 5;
  int num;
}; // ! remember the ";" for structs

int main()
{
  people hooman;

  cin.get(hooman.age);

  system("pause");
}
