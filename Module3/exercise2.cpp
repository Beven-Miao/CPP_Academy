/* Read the standrd input a line at a time, read a word at a time*/
#include <iostream>

int main()
{
    std::string s;
    std::cout << "input a line" << std::endl;
    getline(std::cin,s);

    std::cout << s << std::endl;
    std::cout << "input a word" << std::endl;
    std::cin >> s;
    
    std::cout << s << std::endl;
    return 0;
}
