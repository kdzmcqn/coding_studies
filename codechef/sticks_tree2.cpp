#include <iostream>
#include <set>
using namespace std;

int main()
{
    int T; // number of Tests
    cin >> T;
    while (--T)
        ;
    {
        int N; // N-spaced integers or size
        cin >> N;
        // use set to use repeating values once
        set<int> stick;
        // input values in the set
        for (int i = 0; i < N; i++)
        {
            int val;
            cin >> val;
            if (val > 0)
                stick.insert(val);
        }
        cout << stick.size() << endl; // number min number of operations
    }
    return 0;
}