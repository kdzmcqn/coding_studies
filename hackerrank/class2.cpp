/*
~ Student() : sum(0) {}
* It's the syntax for initializing members of the class and it is valid when using constructors. It is called initializer list and it follows the geneal syntax:
~ class_name(type1 arg1, type2 arg2, type3 arg3): member1(arg1), member2(arg2), member3(arg3){}

* Instead of assignation:
~ class_name(type1 arg1, type2 arg2, type3 arg3){member1 = arg1; member2 = arg2; member3 = arg3}
*/

// #include <cmath>
// #include <cstdio>
// #include <vector>
#include <iostream>
// #include <algorithm>
// #include <cassert>
using namespace std;
class Student
{
private:
    int scores[5]; // 5 exam scores were given to students
    int sum;

public:
    Student() : sum(0) {}
    int calculateTotalScore() { return sum; }
    void input() // inputs the scores
    {
        for (int i = 0; i < 5; i++)
        {
            cout << "inside the input function of student" << endl;
            cin >> scores[i];
            sum += scores[i]; // sum is already being computed
        }
    }
};

int main()
{
    int n; // number of students
    cout << "Number of students ";
    cin >> n;
    Student *s = new Student[n]; // an array of n students
    // todo observe s variable, add *s@n to watch. where n is the number of students
    for (int i = 0; i < n; i++)
    {
        cout << "s.[" << i << "] input()" << endl;
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();
    int eren_score = s[1].calculateTotalScore();
    // determine how many students scored higher than kristen
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        cout << "counting..." << endl;
        int total = s[i].calculateTotalScore();
        if (total > kristen_score)
        {
            cout << "mhmmm..." << endl;
            count++;
        }
    }

    // print result
    cout << "there are " << count << " student/s scored higher than student s[0].";

    return 0;
}
// ! add to watch *s@<number of students> during debug to see each more than 1 dimensions
/*
3
30 40 45 10 10
40 40 40 10 10
50 20 30 10 10

output: 1
*/