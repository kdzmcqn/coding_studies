#include <iostream>

using namespace std;
//Implement the class Box
int BoxCreated, BoxDestroyed;
class Box
{
private:
    //l,b,h are integers representing the dimensions of the box
    int l;
    int b;
    int h;
    long long volume;

public:
    // Constructors:
    // default
    Box() : l{0}, b{0}, h{0} { ++BoxCreated; }
    Box(int il, int ib, int ih) : l{il}, b{ib}, h{ih} { ++BoxCreated; }
    Box(Box &B) : l{B.l}, b{B.b}, h{B.h} { ++BoxCreated; }
    // destructor
    ~Box() { ++BoxDestroyed; }
    // The class should have the following functions :
    int getLength() const { return l; }
    int getBreadth() const { return b; }
    int getHeight() const { return h; }
    long long CalculateVolume()
    {
        long long volume = l;
        volume *= b;
        volume *= h;
        return volume;
        // return 1LL * l * b * h;
    }
    bool operator<(const Box &B)
    {
        if (l < B.l)
            return true;
        if (b < B.b && l == B.l)
            return true;
        if (h < B.h && l == B.l && b == B.b)
            return true;
        return false;
    }

    friend std::ostream &operator<<(std::ostream &out, const Box &box);
};

std::ostream &operator<<(std::ostream &out, const Box &box)
{
    out << box.l << " " << box.b << " " << box.h;
    return out;
}

void check2()
{
    int n;
    cin >> n;
    Box temp;
    for (int i = 0; i < n; i++)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            cout << temp << endl;
        }
        if (type == 2)
        {
            int l, b, h;
            cin >> l >> b >> h;
            Box NewBox(l, b, h);
            temp = NewBox;
            cout << temp << endl;
        }
        if (type == 3)
        {
            int l, b, h;
            cin >> l >> b >> h;
            Box NewBox(l, b, h);
            if (NewBox < temp)
            {
                cout << "Lesser\n";
            }
            else
            {
                cout << "Greater\n";
            }
        }
        if (type == 4)
        {
            cout << temp.CalculateVolume() << endl;
        }
        if (type == 5)
        {
            Box NewBox(temp);
            cout << NewBox << endl;
        }
    }
}

int main()
{
    BoxCreated = 0;
    BoxDestroyed = 0;
    check2();
    cout << "Boxes created: " << BoxCreated << '\n'
         << "Boxes destroyed: " << BoxDestroyed << endl;
}