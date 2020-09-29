#include <iostream>
using namespace std;

int main()
{
	int x;
	int j = 0;
	int k = 0;
	cin >> x;
	cout << "for loop output: ";
	for (int i = 0; i < x; i++) //test case first then runs for a number of increments lang
	{
		cout << i;
	}

	cout << endl
		 << "whie loop output: ";

	while (j < x) //test case first then it runs indefinitely hanggang hindi tally sa condition
	{
		cout << j;
		j++;
	};

	cout << endl
		 << "do whie loop output: ";

	do
	{
		cout << k;
		k++;
	} while (k < x); //runs indefinitely rin pero magrarun muna bago magtest ng case

	system("pause");
	return 0;
}
