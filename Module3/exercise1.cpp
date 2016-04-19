/* show the largest number that can be assigned to short and unsigned short */
#include <iostream>

int main()
{
    short int  a = 0x7fff;
    unsigned short int b = 0xffff;
    std::cout << "short max=" << a << std::endl;
    std::cout << "unsigned short max=" << b << std::endl;
    return 0;
}
