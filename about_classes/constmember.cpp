#include <iostream>
#include <string>
using namespace std;

class Book
{
private:
    string t;

public:
    Book(string _t) : t{_t} {}
    ~Book() {}
};

int main()
{
    string in_title;
    getline(cin, in_title);
    Book my_book(in_title);
    return 0;
}