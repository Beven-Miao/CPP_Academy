/* Compare which string is longer */
#include<iostream>
#include<string>

int main()
{
    std::string s1;
    std::string s2;

    std::cout << "input s1" << std::endl;
    std::cin >> s1;
    std::cout << "input s2" << std::endl;
    std::cin >> s2;

    if(s1 > s2)
        std::cout << "s1 is larger than s2" << std::endl;
    else if(s1 < s2)
        std::cout << "s2 is larger than s1" << std::endl;
    else
        std::cout << "s1 is equal to s2" << std::endl;

    return 0;
}
