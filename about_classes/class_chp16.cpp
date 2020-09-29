#include <iostream>
using namespace std;
// basics
class X
{
private:
    int m;

public:
    X(int i = 0) : m{i} {}

    int mf(int i)
    {
        int old = m;
        m = i;
        return old;
    }
};
X var{7};

// int user(X var, X *ptr)
// {
//     int x = var.mf(7);
//     int y = ptr->mf(9);
//     // int z = var.m; // error
// }

struct Date
{
    int d, m, y;

    void init(int dd, int mm, int yy);
    void add_year(int n);
    void add_month(int n);
    void add_day(int n);
};
void Date::init(int dd, int mm, int yy)
{
    d = dd;
    m = mm;
    y = yy;
}
void Date::add_day(int n)
{
    d += n;
}

Date my_birthday;

void f()
{
    Date today;
    today.init(27, 9, 2020);
    my_birthday.init(20, 2, 1995);

    Date tomorrow = today;
    tomorrow.add_day(1);
}

int main()
{
    f();
    return 0;
}