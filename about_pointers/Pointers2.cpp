#include <iostream>
using namespace std;

void passByValue(int x);

void passByReference(int &x);

void passByAddress(int *x);

int main(){

    int salley = 11;
    int betty = 12;
    int ella = 13;

    cout << "Salley is " << salley << endl;
    cout << "Betty is " << betty << endl;
    cout << "Ella is " << ella << endl;

    passByValue(salley);
    passByReference(betty);
    passByAddress(&ella);

    cout << "Salley is now " << salley << endl;
    cout << "Betty is now " << betty << endl;
    cout << "Ella is now " << ella << endl;

	system("pause");
	return 0;
}

//Just needs a variable, nothing fancy
void passByValue(int x){
    //Make a copy of whatever variable is passed in and modify that copy
    x = 99;
}

void passByReference(int &x){
    //Take the address of whatever variable is passed in and modify the value of that address(AKA, modify the original variable)
    x = 69;
}

//Needs a pointer variable or an ampersand(&) before whatever variable you pass into it
void passByAddress(int *x){
    //Take the pointer of whatever variable is passed in, look at the address the pointer is pointing to, and modify the value of that address(AKA, modify the pointed-to variable)
    *x = 99;
}
