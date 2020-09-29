#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
* lambda function - a disposable funciton. Creating a funciton without
* physically creating an actual function. Function siya pero nakasingit sa code
* hindi yung nakahiwalay pa physically sa kinocode mo

*  template:
~ [captures](parameter){ *codes go here }
* Complier lang ang may alam ng datatype ng lambda kaya ginagamitan ng 'auto'

~ captures: para ma access yung variables outside ng lambdas
*  [&] - pass all variables outside the lambda by reference
*  [=] - pass all variables outside the lambda by value
*  [] - no captures
*  [a,b,...] - creates a copy nung mga variables na yan to be used in the lambda
! note: hindi modifiable (read only kasi pass by value lang)
* [&a,&b,...] - passes the variables by reference
~  note: eto yung modifiable

~ parameter: similar sa normal function - eto yung kukunin na value para
* magamit yung function
*  (datatype n) - required yung n para magamit sa function

* kumukuha siya ng parameters dun sa function pointer:
~ functiontype(*fname)(datatype) e.g void(*func)(int)

* kung ano yung ipapasok na value sa function pointer yun yung gagamitin
*/

void manip(vector<int> &v, void (*func)(int))
{ //dineclare yung func pointer
  for (int i : v)
    func(i); //yung i ang gagamitin na parameter sa lambda function
}

int main()
{
  vector<int> v = {5, 3, 4, 1, 2};
  auto lambda = [](int i) { cout << i << " " << endl; }; //eto mismo yung lambda function
  manip(v, lambda);                                      //lambda yung variable name ng func pointer

  auto lambda1 = [&v]() { sort(v.begin(), v.end()); };
  lambda1();

  auto lambda2 = [](vector<int> v, int x) { cout << v[x] + 1; };
  for (unsigned x = 0; x < v.size(); x++)
  {
    lambda2(v, x);
  }

  int sum = 0;
  for_each(v.begin(), v.end(), [&](int y) { sum += y; });
  /*
  * ipapasa nung for_each yung mga elements sa array doon sa lambda function
  * so instead na gagawa pa ng separate function, in-line lambda na lang

  ! note: ang pinapasa ng for_each is yung elements hindi iterators. Kaya y
  ! lang yung ginamit natin hindi v[y]*/
  cout << endl
       << sum;

  system("pause");
}
