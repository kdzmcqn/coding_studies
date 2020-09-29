#include <iostream>
#include <vector>
using namespace std;

int i = 0, j = 0;

class stuff
{
public:
	int vary(int *x) //points to the value inside the address of a
	{
		cin >> *x;
		return 0;
	}

	int fillvec(vector<vector<int>> *vec, int *b)
	{

		return 0;
	}

private:
	int num = 1;
	vector<vector<int>> nani;
};

int main()
{
	int a, b;
	cout << "enter value of a and b: ";
	cin >> a >> b;
	cout << "initial value of a: " << a << endl;
	stuff key;
	key.vary(&a); //gets the address of a
	cout << "new value of a: ";
	cout << a << endl
		 << endl;

	vector<vector<int>> vec;
	for (::i = 0; ::i < b; ::i++)
	{
		vector<int> invec;
		for (::j = 0; ::j < b; ::j++)
		{
			invec.push_back(0);
		}
		vec.push_back(invec);
	}

	cout << "intial value of vec: " << endl;
	for (::i = 0; ::i < b; ::i++)
	{
		vector<int> invec;
		for (::j = 0; ::j < b; ::j++)
		{
			cout << vec[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	key.fillvec(&vec, &b);
	system("pause");
	return 0;
}
