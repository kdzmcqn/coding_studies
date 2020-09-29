#include <iostream>
#include <string>
using namespace std;

/*similar functions from vector library: (na alam ko)
ang strings rin kasi behave as vectors so...

.erase() .begin(), .end(), .empty(), .clear(), .push_back(), .length(), .size()
.insert(), .at(), name[]
*/

int main()
{
/*---string assignment methods------*/
  string a = "I am what I am. What am I, really?\n"; //method 1
  string a1 ("apple\n"); //method 2
  string a2;
  a2.assign("dates\n"); //method 3
  cout<<a<<a1<<a2<<endl;

/*strings are arrays of characters too so kung ano pwede gawin sa array pwede
rin gawin sa strings*/
  cout<<a1.at(0)<<endl<<endl; //index ng a is 0 and so on pwede rin a1[0];

//parehas lang tong dalawa na to
  cout<<a.size()<<endl;
  cout<<a1.length()<<endl<<endl;

//substring .substr(start,end) gets the letters from 'start' to 'end'
  cout<<a.substr(1,6)<<endl;

//yung laman ni a and a1 magpapalit
  a1.swap(a2);
  cout<<a1<<a2<<endl;

//find function for finding particular characters
cout<<a.find("am")<<endl; //magsisimulang maghanap sa 0 index
cout<<a.rfind("am")<<endl<<endl; //magsisimulang maghanap sa last index

//erase strings
cout<<a<<endl;
a.erase(15); //pang 15 na character onward buburahin
cout<<a<<endl;

/*name.replace(a,b,"c")
a - pang-ilang index magsisimulang magpapalit
b - hangang pang-ilang index papalitan
c - ano yung ipapalit na strings */
a.replace(15,5," Who am I, really?");
cout<<a<<endl;

/*insert function name.insert(a,"b")
a - saang index magsisimula magpalit
b - yung ipapalit na string*/
a.insert(15," However,");
cout<<a<<endl<<endl;

cout<<a2<<endl;
a2.clear();
cout<<a2;

a.push_back('a');
cout<<a;

system("pause");
return 0;
}
