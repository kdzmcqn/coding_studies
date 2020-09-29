#include <iostream>
using namespace std;

int main()
{
    char letter = 'a';
    while (letter != 'z')
    {
        cout << "( " << letter << " + 1 ) == " << int(letter) << "  ";
        letter += 1;
        cout << letter << '\n';
    }
}