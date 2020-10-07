#include <string>
#include <vector>
#include <iostream>
/*
 * solution("abc") // should return {"ab", "c_"}
 * solution("abcdef") // should return {"ab", "cd", "ef"}
*/

std::vector<std::string> solution(const std::string &s)
{
    int s_size = s.size();
    std::vector<std::string> v;

    std::cout << s_size << std::endl;
    for (int i = 0; i < s_size; i += 2)
    {
        std::string temp(s, i, 2);
        // std::cout << temp << std::endl;
        v.push_back(temp);
    }

    if (s_size % 2) v.back().append("_");
    // print 
    std::cout << '{';
    for (auto &i : v)
    {
        std::cout << "\"" << i << "\"";
        if (&i != &v.back()) std::cout << ", ";
    }
    std::cout << '}' << std::endl;
    return v;
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
    solution("        ");
    solution("         ");
    std::cout << "random:" << std::endl;
    solution("pqoG#4? JkUdU)(jUA U9 U AAU#?%2Y5A UA4N1ZHGFX 4ST3 ??4YBDB//Y3$ZW QQ$QPQ##$fs  48 )29   $j!QPQ2z3x#$?QP5QQ Pc g7RHM8jb6 %3 fsa #a HEHc jkHERHEhkf 30 JLKF m-3rcn dgg");
    return 0;
}