#include "std_lib_facilities.h"

int main()
{
    cout << "Please enter a floating-point value: ";
    double n;
    cin >> n;
    cout << "n == " << n
         << "\nn + 1 == " << n + 1
         << "\nthree times n == " << 3 * n
         << "\ntwice n == " << n + n
         << "\nn squared == " << n * n
         << "\nn half of n == " << n / 2
         << "\nsquare root of n == " << sqrt(n)
         << '\n';
    cout << "Please enter your first and second names\n";
    string first;
    string second;
    cin >> first >> second;
    string name = first + ' ' + second;
    cout << "Hello, " << name << '\n';
    cout << "To read and compare names\n enter two names\n";
    string name1;
    string name2;
    cin >> name1 >> name2;
    if (name1 == name2)
        cout << "that's the same name twice\n";
    if (name1 < name1)
        cout << name1 << " is alphabetically before " << name2 << '\n';
    if (name1 > name2)
        cout << name1 << " is alphabetically after " << name2 << '\n';
}