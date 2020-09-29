#include <iostream>
using namespace std;

void dec() /*kapag sa unahan ginawa yung function, magagamit na siya sa main
function kasi linear pagbabasa ng code*/
{
  cout << "The sum is: ";
}

int addtwo(int &a, int &b); /*tawag dito function prototyping. idedeclare mo lang yung
variable tapos kapag ginamit siya sa main function, hahanapin siya sa baba
ng main function */

int main()
{
  int x, y;
  cin >> x >> y;

  dec();
  cout << addtwo(x, y); /*magagamit lang yung addtwo function kapag meron ka nung dalawa
na integer parameters a and b */

  system("pause");
  return 0;
}

int addtwo(int &a, int &b) //eto yung function sa prototype sa taas
{
  int sum = a + b;
  return sum;
}
