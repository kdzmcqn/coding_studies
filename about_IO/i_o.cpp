#include <iostream>
using namespace std;

struct Entry
{
    string name;
    int number;
};

ostream &operator<<(ostream &os, const Entry &e)
{
    return os << "{\"" << e.name << "\", " << e.number << "}";
}

istream &operator>>(istream &is, Entry &e)
// read {"name", number} pair
{
    char c, c2;
    // start with a "{"
    if (is >> c && c == '{' && is >> c2 && c2 == '"')
    {
        string name;                  // default is empty string ""
        while (is.get(c) && c != '"') // after " will be name
            name += c;
        if (is >> c && c == ',')
        {
            int number = 0;
            if (is >> number >> c && c == '}')
            // read the number and "}"
            {
                // assign to Entry
                e = {name, number};
                return is;
            }
        }
    }
    // register failure in the stream
    // is.setf(ios_base::failbit);
    return is;
}

int main()
{
    Entry ee;
    for (Entry ee; cin >> ee;)
        cout << ee << '\n';
    return 0;
}