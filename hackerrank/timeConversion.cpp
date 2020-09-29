#include <iostream>
#include <string>
#include <fstream>

using namespace std;

string timeConversion(string s)
{
    string hour_string = s.substr(0, 2); // subtstr capturing from 0, first two char
    int hour = stoi(hour_string);        // stoi convert string to int
    size_t pos = s.find("PM");           // pos is the position; find value in range
    if (pos != string::npos)             // npos is max value for size_t
    {
        if (hour + 12 < 24) // add 12 to hour because PM is found
            hour_string = to_string(hour + 12);
    }
    else
    {
        if (hour == 12)
            hour_string = "00";
    }
    return s.replace(0, 2, hour_string).erase(s.size() - 2);
}

int main()
{
    ofstream fout(getenv("OUTPUTPATH"));
    string s;
    getline(cin, s);
    string result = timeConversion(s);
    cout << result << endl;
    fout.close();
    return 0;
}