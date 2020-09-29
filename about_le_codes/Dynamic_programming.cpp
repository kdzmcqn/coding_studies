#include <iostream>
#include <unordered_map>
using namespace std;

/*Dynaminc programming: Dividing a big problem into subproblems para mas mabilis
and mas efficient isolve
a good example is computing for the nth fibonacci numbers:

fib = 1, 1, 2, 3, 5...

Pseudocode (bad algo for fibonacci)
  fib(n):
  if n<=2: f =1
  else: f = fib(n-1) + fib(n-2) -> ang mangyayari dito magkakaroon ng
  unecessary recursion kaya inefficient
  return f

Techniques:
1. Memoization - in memoization, icocompute natin yung subproblmen and iiistore
natin siya in a 'dictionary'/memo. Ang purpose nito is para hindi na magiging
repetitive yung pagcocompute kasi ichecheck muna natin sa 'dictionary'/memo kung
nasolve na; ang mangyayari gagamitin na lang natin yung result insead of
recomputing for the result. Remember and reuse the results

Memoized Pseudocode (better algo)
  memo = {}
  fib(n):
  if n is in memo: return memo[n]
  if n <= 2: f = 1
  else:f = fib(n-1) + fib(n-2)
  return f

So dito, iniistore natin yung value nung fibonacci na nacompute natin para if
maencounter natin siya sa recursion, yung value na lang sa loob ng memo yung
kukunin, hindi na magrerecompute. Constant lang time kasi yung pag-acces sa
memo +recursion kaya mas mabilis unlike sa latter, exponential time.

2. Bottom-up - similar sa memoization pero using for loop kasi sa latter
recursion ng functions. Mas efficient kasi less function calls. Bottom-up
saves space

Bottom-up algo for fibonacci
  fib = {}
  for k in range(1,n+1) -> magsisimula siya from start to end ng range
    if k <=2: f = 1
    else: f = fib(k-1) + fib(k-2)
  fib[k] = f
  return fib[n]
*/

//typical fibonacci function
int fib(int num)
{
  int f;
  if (num <= 2)
  {
    return 1;
  }

  else
  {
    f = fib(num - 1) + fib(num - 2);
  }

  return f;
}

//memoized fibonacci function
int fibmem(int num)
{
  int f;
  unordered_map<int, int> memo;
  if (memo.find(num) != memo.end())
  {
    return memo[num];
  }

  if (num <= 2)
    return 1;

  else
  {
    f = fibmem(num - 1) + fibmem(num - 2);
    memo[num] = f;
    return f;
  }
}

//bottom-up fibonacci function
int fib_bu(int num)
{
  int f;
  unordered_map<int, int> memo;
  for (int i = 1; i <= num; i++)
  {
    if (memo.find(i) != memo.end())
    {
      memo[i] = f;
    }

    if (i <= 2)
    {
      f = 1;
    }

    else
    {
      f = fib_bu(i - 1) + fib_bu(i - 2);
    }
  }
  return f;
}

int main()
{
  int num;
  cin >> num;
  cout << fib(num) << endl;
  cout << fibmem(num) << endl;
  cout << fib_bu(num) << endl;

  system("pause");
  return 0;
}
