#include <iostream>
using namespace std;

int main()
{
	int a;
	cout << "Pick some int value: ";
	cin >> a;
	int *b = &a;
	int **c = &b;
	int ***d = &c;
	cout << "Storing some value in 'a'" << endl;
	cout << "a is: " << a << endl;

	cout << "Passing the value of 'a' into pointer '*b'; address of '&a' to 'b'" << endl;
	cout << "*b is: " << *b << "\n b is: " << b << endl;

	cout << "Passing the address of pointer '*b' to '**c'" << endl;
	cout << "**c is: " << **c << "\n*c is: " << *c << "\nc is: " << c << endl;

	cout << "Passing the address of pointer '**c' to pointer '***d'" << endl;
	cout << "***d is: " << ***d << "\n**d is: " << **d << "\n*d is: " << *d << "\nd is: " << d << endl;
	cout << "What's the address of 'a' then? Answer is: " << &a << endl;
	system("pause");
}
