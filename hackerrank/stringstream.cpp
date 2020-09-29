#include <iostream>
#include <vector>
#include <sstream>
#include <map>

using namespace std;

vector<int> parseInts(string str)
{
    stringstream s(str);
    vector<int> out;
    char ch;
    int nums;
    while (s >> nums)
    {
        out.push_back(nums);
        s >> ch;
    }
    return out;
}

int main()
{
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for (int i = 0; i < integers.size(); i++)
    {
        cout << integers[i] << "\n";
    }
    return 0;
}
