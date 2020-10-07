#include <vector>
#include <string>
#include <iostream>
std::vector<std::string> solution(const std::string &s)
{
    std::vector<std::string> res;
    for (int i = 0; i < s.length(); i += 2) res.push_back(s.substr(i, 2));
    if (s.length() % 2) res[res.size() - 1] += "_";
    return res;
}

int main()
{
    std::cout << "empty strings:" << std::endl;
    solution("");
    std::cout << "even length:" << std::endl;
    solution("abcdef");
    solution("42424242");
    std::cout << "odd length:" << std::endl;
    solution("1");
    solution("abc");
    solution("123asdj");
    std::cout << "spaces:" << std::endl;
    solution("I love you");
    solution("Hello World");
    std::cout << "random:" << std::endl;
    solution("pqoG#4? JkUdU)(jUA U9 U AAU#?%2Y5A UA4N1ZHGFX 4ST3 ??4YBDB//Y3$ZW QQ$QPQ##$fs  48 )29   $j!QPQ2z3x#$?QP5QQ Pc g7RHM8jb6 %3 fsa #a HEHc jkHERHEhkf 30 JLKF m-3rcn dgg");
    return 0;
}
