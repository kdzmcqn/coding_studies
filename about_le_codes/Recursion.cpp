#include <iostream>
using namespace std;

int factorial(int x)//factorial function
{
  if(x == 1) //base case kapag yung x mo nagdecrement na into 1
  {
  return 1; //irereturn niya na final value ng recursion is 1
  }

  else //kapag hindi pa 1 yung input eto yung gagawin
  {
    return x*factorial(x-1); /*bali ang gagawin nito is yung x imumultiply
    sa value ng factorial(x-1). eh ano ba ginagawa nung factorial function?
    edi papasok siya ulit sa function tapos irereturn niya naman yung value
    ng (x-1) times yung value ng factorial(x-2) parang ganito:
    x*factorial(x-1)*factorial(x-2)*...factorial(x-n)

    ang purpose ni return is kukunin niya yung mga values na gusto mo kunin
    para magterminate yung function*/
  }
}

int main()
{
int a;
cin>>a;
cout<<factorial(a);

system("pause");
return 0;
}
