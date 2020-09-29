#include <iostream>
using namespace std;

int x, y;
char z;

/*global variables lang gagamitin natin sa dimensions ng matrix using unary
scope resolution operator para reusable*/

int main()
{
/*gagawa ng array na fixed length and value na*/
int arr1[5] = {1,2,3,4,5}; //array na nagsstore ng 5 elements
cout<<arr1[4]<<endl<<endl; /*yung numbering ng pag-access nito is 0-4. so ang
laman ng arr1[0] is 1, arr1[1] is 2... and so on*/

/*gawa naman tayo ng 1-dimension, configurable array using for loop*/
cout<<"number of elements in array: ";
cin>>::x;
int arr2[::x]; //gagamitin yung input value pangdefine ng length ng array
cout<<endl;

for(int i=0;i<::x;i++)
{
  cin>>::y;
  arr2[i] = ::y; /*for every increment, ilalagay niya yung input natin sa loob
  ng array[n], as mention sa unang example */
}
cout<<endl;

for(int i=0;i<::x;i++)
{
  cout<<arr2[i]<<" ";//ididisplay yung laman ng arr[n]
}
cout<<endl<<endl;

/*2-dimensional array naman tapos characters yung input*/
cout<<"number of elements in 2D char array: ";
cin>>::x>>::y;
cout<<endl;
char arr3 [::x][::y]; //row and length dimensions ng 2d array

for(int i=0;i<::x;i++) //stay nth row
{
  for(int j=0;j<::y;j++)//nth row then per nth column ang paglagay ng characters
  {
    cin>>z;
    arr3[i][j]=z;
  }
}
cout<<endl;

for(int i=0;i<::x;i++) //similar concept ng paglalagay pero output naman
{
  for(int j=0;j<::y;j++)
  {
    cout<<arr3[i][j]<<" ";
  }
cout<<endl;
}

return 0;
}

#include <iostream>
//walang #include <bits/stdc++.h> sa visual studio

using namespace std;
/*applicable lang tong method na 'to sa 1 dimensional array'*/
class arrmanip
{
public:
//gagana yung mga functions kapag may input variable and array na may size
void store(int x, int array[])
{
int b;
  for(int i=0;i<x;i++)
  {
	  cout << "enter values: ";
	  cin>>b;
    array[i] = b; //pero pwede gumamit ng variable in accessing arrays
  }
  cout<<endl;
}

void get(int x, int array[])
  {
    for(int i=0;i<x;i++)
    {
      cout<<array[i]<<" ";
    }
  }
};

int main()
{
	cout << "array size = 5"<<endl;
int arr[5]; // sa visual studio, hindi pwede maglagay ng variable sa array; kaya vector dapat gamitin

arrmanip key;
key.store(5,arr); //kunin yung array size and array
key.get(5,arr); //no need na ilagay yung brackets dito

system("pause");
return 0;
}

#include <iostream>
using namespace std;

int row=3,col=3; //global variables

class arr
{
public:
  arr() //constructor: nagrarun agad pagkacall sa any function sa class
  {
    a = ::row; //:: is scopre resolution operator
    b = ::col;
  }

  int sto() /*sa class functions mo gawin yung yung pagstore ng
matrix para doon sa class masave  tapos dapat int type yung function */
  {
    int arr[3][3];
    cout<<"input elements in 3x3 matrix:\n";
    
	for(int i=0;i<a;i++){
      for(int j=0;j<b;j++)
      {
        cin>>num;
        arr[i][j] = num;
      }
    }
	
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cout << arr[i][j];
		}
		cout << endl;
	}

	return 0;
  }

private: //dito dapat dinedeclare lahat variables
  int num,a,b;
};

int main()
{
cout<<"generate array in class:\n";
arr key;
key.sto();

system("pause");
return 0;
}

#include <iostream>
using namespace std;

void out(int x,int array[]); //function prototyping lang

int main()
{
int arr[5];

out(5,arr); //dito arr na lang no need to include []

return 0;
}

/*yung array operations pwedeng ilagay sa ibang function*/
void out(int x,int array[]) //pero sa fuction dapat included yung []
{
cout<<"enter matix elements: "<<endl;
int c;
  for(int i=0;i<x;i++) //sa ibang function giagawa yung storing
  {
    cin>>c;
    array[i]=c;
  }
}

/*note: yung method na yan hindi pwede sa higher-dimensioned arrays. May ibang
way para gawin yun*/

#include <iostream>
using namespace std;

int main()
{
int a,b;
int sum = 0;
cin>>a;
int arr[a];

for(int i=0;i<a;i++)
{
  cin>>b;
  arr[i]=b;
}

//single array operations
for(int i=0;i<a;i++)
{
  sum = sum + arr[i]; //pwede na rin diyan any array operations
}
cout<<sum<<endl<<endl;

/*array to array operations*/
int arr1[a];
for(int i=0;i<a;i++)
{
  cin>>b;
  arr1[i]=b;
}

for(int i=0;i<a;i++)
{
  sum = arr[i]+arr1[i];
//dapat pareho ng dimensions ng arrays for basic arithmetic operations
  cout<<sum<<" ";
}

return 0;
}

/*sa ibang file na lang yung basic matrix operations*/

#include <iostream>
#include <vector>
using namespace std;

/*function pointers - way siya para ma-assign yung function sa variable

format:
1. functiontype(*functionname)(parameters) = variable name <- eto yung orig format
2. auto functionname = variable name <- using auto

bawal arrays sa parameters
*/

void display(int i) //eto yung function na dinedefine ng function pointer
{
  cout<<i<<endl;
}

void manip(vector<int> &v, void(*get)(int))//declare function pointer
{
  for(int i:v)
  get(i); //gagamitin yun
}

//output ng using auto
void display1(vector<int> &v)
{
  for(int i:v)
  cout<<i<<" ";
}

int main()
{
  vector<int>v = {1,2,3,4,5};
  manip(v,display); //ipapas yung vector 'v' and variable 'display' sa manip

  auto func = display1; //eto another method using auto
  func(v);
  
  system("pause");
  return 0;
}

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

#include <iostream>
#include <vector> //declare yung lib
using namespace std; //pag wala to gagamitan pa ng std:: yung mga functions

/*
vector<data type> name - creates a vector labeled name
vector<int> vec(x,0) - (x,0) laman ng vector is x integers of value 0
name[n] or name.at(n) - access the element of the nth in the vec
name.push_back(n) - puts n in empty vector 'name'
name.size() - return the vector size
name.begin() - babasahin yung vector starting from the first element
name.end() - babasahin yung vector starting from the last element
name.insert(i, n) - inserts n before index i of vector 'name'; mareresize rin after
name.erase(i) - removes element in index i of vector 'name'; mareresize rin after
name.clear() - icclear yung laman ng vector
name.empty() - ichecheck kung walang nang laman (boolean 1 pag wala 0 pag meron)
*/

int main()
{
  int x,y;
  cout<<"Input vector sizes: ";
  cin>>x;
  vector<int> vec(x,0);

  cout<<"vec size: "<<vec.size()<<endl;
  for(int i=0;i<x;i++)
  {
    cout<<vec.at(i)<<" ";
  }
  cout<<endl;

  cout<<"\nInput elements for vec1\n";
  vector<int> vec1;
  for(int i=0;i<x;i++)
  {
    cin>>y;
    vec1.push_back(y);
  }

  cout<<"\nvec1 size: "<<vec1.size()<<endl;
  for(int i=0;i<x;i++)
  {
    cout<<vec1.at(i)<<" ";
  }

  cout<<"\n\nReplace values of vec: \n";
  for(int i=0;i<x;i++)
  {
    cin>>y;
    vec.at(i) = y;
  }

  cout<<"\nvec size: "<<vec.size()<<endl;
  for(int i=0;i<x;i++)
  {
    cout<<vec.at(i)<<" ";
  }

  cout<<"\n\nerasing element 2 in vec1:\n";
  vec1.erase(vec1.begin()+1);
  cout<<"\nvec1 size: "<<vec1.size()<<endl;

  for(unsigned int i=0;i<vec1.size();i++)
  {
    cout<<vec1.at(i)<<" ";
  }

  cout<<"\n\nInsert element at vec1 at the end: \n";
  cin>>y;
  vec1.insert(vec1.end(),y);
  cout<<"\nvec1 size: "<<vec1.size()<<endl;

  for(int i=0;i<vec1.size();i++)
  {
    cout<<vec1.at(i)<<" ";
  }

  cout<<"\n\nCheck if vec is empty by using name.empty(): \n";
  cout<<vec.empty()<<endl;

  cout<<"\nErasing vec using name.clear(): "<<endl;
  vec.clear();

  cout<<"\nCheck again if vec is empty by using name.empty(): \n";
  cout<<vec.empty()<<endl;

  for(int i=0;i<x;i++)
  {
    cout<<vec.at(i)<<" ";
  }
  return 0;
}

#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int r,n,x;
  vector<vector<int>> vec; //gumawa ka ng vector na laman ay vectors rin
  cin>>r;

  for(int i=0;i<r;i++)
  {
    vector<int> fill; //declare mo yung 'fill' na nasa loob ni 'vec'
    cin>>n;

    for(int j=0;j<n;j++)
    {
      cin>>x;
      fill.push_back(x); /*lalagyan mo ng elements yung 'fill' at index j*/
    }
    vec.push_back(fill); /*Ilalagay mo naman yung laman si 'fill' sa loob
    ni 'vec' at index i*/
  }

  for(int i=0;i<vec.size();i++)
  {
    for(int j=0;j<vec.at(i).size();j++)
    {
      cout<<vec[i][j]<<" ";
    }
    cout<<endl;
  }

cout<<vec[0][1]<<endl;
cout<<vec[1][3];

  return 0;
}

#include <iostream>
#include <vector>
using namespace std;

/*Sa class gagawin lahat ng vec manipulation*/

class vecops
{
public:
  void vecinput(int a, int b)
  {
    row = a;
    col = b;

    for(i=0;i<row;i++)
    {
      vector<int> vecin
      for(j=0;j<col;j++)
      {
        cin>>num;
        vecin.push_back(num);
      }
      vec.push_back(vecin);
    }
    vec.shrink_to_fit();
  }

  void vecout(int a, int b)
  {
    for(i=0;i<row;i++)
    {
      vector<int> vecin;
      for(j=0;j<col;j++)
      {
        cout<<vec[i][j]<<" ";
      }
      cout<<endl;
    }
  }

private:
int row,col,num,i,j;
vector<vector<int>> vec;
};


int main()
{
  int x,y;
  cin>>x>>y;
  vecops key;
  key.vecinput(x,y);
  key.vecout(x,y);

}

#include <iostream>
#include <vector>
using namespace std;

/*VECTORS AS PARAMETERS
NOTE: dapat laging pinapasa yung mga arrays/vectors/containters by reference
kasi it takes up a lot of memory kung hindi*/


void vecfill(vector<int>&); // IMPORTANT always pass vectors/arrays by reference
void vecprint(const vector<int>&); //'const' para hindi maedit yung content ng vec
int i,size; // global variable para ma-access sa lahat ng functions


int main()
{
  vector<int> vec;
  vecfill(vec); //declare the name of the vector
  vecprint(vec);

  return 0;
}

void vecfill(vector<int>& newvec) //passing by reference saves memory
{
  int num;
  cin>>::size;

    for(::i=0;::i<::size;::i++)
    {
      cin>>num;
      newvec.push_back(num);
    }
  cout<<endl;
}

void vecprint(const vector<int>& newvec) //sa memory nakastore kaya pweds iaccess
{
  for(::i=0;::i<::size;::i++)
  {
    cout<<newvec.at(i)<<" ";
  }
cout<<endl;
}




int numSequence,numQueries, k;

    cin >> numSequence >> numQueries;

// sequence
    int** array = new int*[numSequence];
// query 
    int** query = new int*[numQueries];

    for(int i=0;i<numSequence;i++){
        cin >> k; 
        array[i] = new int[k];
        
        for (int j=0;j<k;j++){
            cin >> array[i][j];
        } 
    }

    for(int i = 0; i<numQueries;i++){
        query[i] = new int[2];
        cin >> query[i][0] >> query[i][1]; 
        cout << array[query[i][0]][query[i][1]] << endl;
    }
  
	return 0;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    // construct the array
    int n, q;
    std::cin >> n >> q;
    int** array = new int*[n];
    for (int i = 0; i < n; i++){
        int k;
        std::cin >> k;
        array[i] = new int[k];
        for (int j = 0; j < k; j++){
            std::cin >> array[i][j];
        }
    }
    // query
    for (int s = 0; s < q; s++){
        int i, j;
        std::cin >> i >> j;
        std::cout << array[i][j] << std::endl;
    }
    // deallocate the array
    for (int i = 0; i < n; i++){
        delete[] array[i];
    }
    delete[] array;
    return 0;
}


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
//using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;                                  //number of Arrays
    int q;                                  //number of Queries
    int tempValue;                          //would be used to store the input value of each element in inner vector
    
    //storing the number of arrays in 'n' and number of queries in 'q'
    std::cin >> n >> q;                    
    
    ////////////////////////
    /*creation of vectors*/
    //////////////////////
    
    //creating 'n' number of vector<int>
    std::vector<std::vector<int>> a(n);
    

    int numberOfElements;                    //number of elements in each inner vector
    //for each vector
    for(int i = 0; i < n; i++){
        //store the number of elements desired
        std::cin >> numberOfElements;
        //runs 'numberOfElements times
        for(int j = 0; j < numberOfElements; j++){
            std::cin >> tempValue;
            a[i].push_back(tempValue);
        }
    }
    
    ///////////////////////
    /*queries of vectors*/
    /////////////////////
    
    int outVector;                          //stores the queried outer vector index
    int inVector;                           //stores the queried inner vector index
    //runs 'q' times
    for(int i = 0; i < q; i++){
        std::cin >> outVector >> inVector;
        std::cout << a[outVector][inVector];
        std::cout << std::endl;
    }
  
    return 0;
}

"""
A lot of things you use often (like cout/cin/ and even the string data type) in C++ are actually part of the standard library and live in the std namespace.
Meaning- when you include a "standard library file" (say "iostream"), you actually tell your compiler to include code from the "iostream" code file. The functions/classes/data types and etc' are all defined inside this code within the std namespace.
If you use cout without "using namespace std;"- when you would try to compile your code- your compiler would tell you there is not "cout". That's because cout is included somewhere in the code your compiler processes- but its visibilty (aka "scope") is limited.
When you don't use "using..." you would have to call cout- std::cout, string- std::string and so on.
There is nothing wrong with simplifying things in this code with putting the "using" statement- but in bigger projects- it's bad practice: http://stackoverflow.com/questions/1452721/why-is-using-namespace-std-considered-bad-practice
It also helps when learning- so you would understand what comes from the standard library, and what header you even got to include in which file.
"""

int main() {
    int n, q, k;
	std::cin >> n >> q;
	std::vector<std::vector<int>> a;
	std::vector<std::vector<int>> b;
	a.resize(n);
	b.resize(q);
	for (int v1 = 0; v1 < n; v1++) {
		std::cin >> k;
		a[v1].resize(k);
		for (int v2 = 0; v2 < k; v2++) {
			std::cin >> a[v1][v2];
		}
	}
	for (int v3 = 0; v3 < q; v3++) {
		b[v3].resize(2);
		std::cin >> b[v3][0] >> b[v3][1];
	}
	for (int i = 0; i < q; i++) {
		std::cout << a[b[i][0]][b[i][1]] << std::endl;
	}
    return 0;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,q,k,i,j;
    cin >> n >> q;
    vector<vector<int> >arr(n);
    for (i=0; i<n; ++i){
        cin >> k;
        arr[i].resize(k);
        for(j=0 ; j<k; ++j){
            cin >> arr[i][j];
        }       
    }

    for(int l=0; l<q; ++l){
        cin >> i >> j;
        cout << arr[i][j]<<endl;
    }  
        
    return 0;
}


arr[i].resize(k) will create a container/array of size k inside the arr vector at position i.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
/*
2 2
3 1 5 4
5 1 2 8 9 3
0 1
1 3
*/
int main()
{
	int n, q;
	int k, g, h;
	cout << "enter number of array and questions ";
	cin >> n >> q; // n number of array, q number of questions
	cout << endl;
	int** col = new int* [n]; //nag allocate palang tayo ng pointer to a pointer
	for (int i = 0; i < n; ++i)
	{
		col[i] = new int[n]; //array of pointers of n amount. diyan nakalagay ang mga pointers
	}
	cout << "address of array of pointers " << &(**col) << endl; //address ng array kung nasaan ang mga pointers
	cout << "address of first pointer " << &(*col) << endl; //address ng first pointer
	cout << "address of col[0][0] " << &(col[0]) << endl; //address ng first pointer
	for (int y = 0; y < n; ++y)
	{
		cout << "enter size of array ";
		cin >> k;
		for (int x = 0; x < k; ++x)
		{
			cout << "array " << y << " element "<<x<<" ";
			cin >> col[y][x]; cout << "\n " << &(col[y][x])<<endl;
		}
	}
	for (int i = 0; i < q; ++i)
	{
		cout << "enter row and col ";
		cin >> g >> h;
		cout << col[g][h] << endl;
	}

	/*for (int i = 0; i < n; i++)
		delete[] col[i]; //delete muna yung laman ng pointers. or else kapag nadelete lang array ng pointers..
						 // di mo na ma-aaccess yung memory ng laman, thus di mo madedelete. 
	delete[] col; //delete yung array ng pointers
	// at the moment may heap corruption shiz
	*/
	return 0;
}


