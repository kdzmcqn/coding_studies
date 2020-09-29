#include <iostream>
using namespace std; /*ginagamit nga pala to para hindi na gamitan ng scope
resolution operator everytime na gagamit tayo ng cin and cout - or any kahit
ano sa std library */

int main()
{
  int x;
  cout<<"input number between 1-3: ";
  cin>>x;

  switch(x) //swtich function as sub for if else
  {//magagamit lang siya if fixed yung condition unlike sa if else variable kasi
  case 1: //kapag yung input daw ay strictly equal to 1
  cout<<"one";
  break; /*ang ginagawa ng break is tinitigil niya yung program sa part na yan
  para hindi na ianalyze yung mga next cases (useful for stopping loops)*/

  case 2://kapag yung input daw ay strictly equal to 2
  cout<<"two";
  break;

  case 3:
  cout<<"three";
  break;

  default://kapag yung input daw wala sa any of the conditions
  cout<<"not in range";
  break;
  }

  system("pause");
  return 0;
}
