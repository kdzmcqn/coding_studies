#include <vector>
#include <iostream>

using namespace std;

int main()
{
    vector<int> v;
    int n;
    // input size of v
    cout << "input size n: ";
    cin >> n;
    // put stuff in vector
    for (int i = 0; i < n; i++)
    {
        cout << "input in index " << i << ": ";
        int x;
        cin >> x;
        v.push_back(x);
    }

    // p position; r ranges
    int p, r1, r2;

    // remove item in p position
    cout << "input position of item to remove: ";
    cin >> p;
    if (p < v.size()) // make sure it's within vector index
        v.erase(v.begin() + (p - 1));

    // remove items in ranges r1 to r2
    cout << "input ranges r1 and r2: ";
    cin >> r1 >> r2;
    if (r1 < r2 && r2 < v.size())
        v.erase(v.begin() + (r1 - 1), v.begin() + (r2 - 1));

    // print vector size
    cout << "size of vector: " << v.size() << endl;
    cout << "current items in vector: " << endl;

    // print items in vector
    for (auto _v : v)
        cout << _v << " ";
    cout << endl;
    return 0;
}
