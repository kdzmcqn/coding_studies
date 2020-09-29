#include <iostream>

int main()
{
    int a = 10;
    int b = 5;
    std::cout << a << ' ' << b << std::endl;
    a = a + b;
    b = a - b;
    a = a - b;
    std::cout << a << ' ' << b << std::endl;
    int x = 10;
    int y = 5;
    std::cout << x << ' ' << y << std::endl;
    x = x + y;
    y = x ^ y;
    x = x ^ y;
    std::cout << x << ' ' << y << std::endl;

    return 0;
}