#include <iostream>
#include <vector>
using namespace std;

void passvar(int &x);					 //pwedeng wala rin yung variable
void passvec(vector<vector<int>> &vec1); //pwedeng wala rin yung vector name

int main()
{
	int a;
	cin >> a;
	vector<vector<int>> vec;
	for (int i = 0; i < 3; i++)
	{
		vector<int> invec;
		for (int j = 0; j < 3; j++)
		{
			invec.push_back(0);
		}
		vec.push_back(invec);
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << vec[i][j] << " ";
		}
		cout << endl;
	}

	passvar(a);	  //pinass yung value ng variable by reference sa function passvar
	passvec(vec); //pass yung vector of vectors by reference sa function passvec

	cout << "New value of a: " << a << endl;
	cout << "New value of vec: " << endl;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << vec[i][j] << " ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}

void passvar(int &x)
{
	x = 5;
}

void passvec(vector<vector<int>> &vec1) //pero dito dapat meron vector name
{
	vec1.clear();

	for (int i = 0; i < 3; i++)
	{
		vector<int> invec1;
		for (int j = 0; j < 3; j++)
		{
			invec1.push_back(1);
		}
		vec1.push_back(invec1);
	}
}
