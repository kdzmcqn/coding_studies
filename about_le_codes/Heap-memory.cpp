#include <iostream>
using namespace std;

int compare()
{
  int *a = new int;
  *a = 5;
  cout<<a<<endl<<*a<<endl<<endl;
  //as you will see here magkiabang address inistore instead na ireplace
  a = new int (10);
  cout<<a<<endl<<*a<<endl<<endl;

  return 0;
}

int main()
{
  //creates a memory out of stack memery and into heap mem
  int *p = new int; //allocate memory on the heap memory
  *p = 5;
  cout<<p<<endl<<*p<<endl<<endl;

  delete p; //deallocate memory
  p = NULL; //or p=0 to avoid dangling pointers
  /*saves memory: not using 'delete' creates a new int in a different address.
  hence the int 5 is unused and still in the memory. This should be deleted*/

  p = new int(10);
  cout<<p<<endl<<*p<<endl<<endl<<"--------"<<endl;
  compare();
}


/* dangling pointers: pointers that point to an address location in the heap
but is not longer a valid location kasi nasa heap nga. Nagdeallocate ka so
wala na yung memory allocation doon*/
