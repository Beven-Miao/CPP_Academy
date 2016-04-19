/* Read string from standard input, and concatenating into one large string */
#include <iostream>
#include <string>

void connect()
{
    std::string str1;
    std::string str2;
    while(std::cin >> str1)
    {
	str2 = str2 + str1 + " ";
	std::cout << "str2 is:" << str2 << std::endl;
    }
}

int main()
{
    std::string str;
    connect();
    return 0;
}

