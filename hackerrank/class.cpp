#include <iostream>
#include <sstream>
using namespace std;

class Student
{
private:
    int age;
    string first_name;
    string last_name;
    int standard;

public:
    void set_age(int nage) { age = nage; }
    void set_first_name(string nfirst_name) { first_name = nfirst_name; }
    void set_last_name(string nlast_name) { last_name = nlast_name; }
    void set_standard(int nstandard) { standard = nstandard; }
    int get_age() { return age; }
    string get_first_name() { return first_name; }
    string get_last_name() { return last_name; }
    int get_standard() { return standard; }

    string to_string()
    {
        stringstream s;
        char c = ','; // single quotes for single char literals
        s << age << c << first_name << c << last_name << c << standard << endl;
        return s.str();
    }
};

int main()
{
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();

    return 0;
}