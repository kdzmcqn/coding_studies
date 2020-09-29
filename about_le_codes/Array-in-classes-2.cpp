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
