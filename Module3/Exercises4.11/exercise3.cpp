/* Print the size od the fundametal types */
#include <iostream>

int main()
{
    std::cout << "Size of char:" << sizeof(char) << std::endl;
    std::cout << "Size of short:" << sizeof(short) << std::endl;
    std::cout << "Size of int:" << sizeof(int) << std::endl;
    std::cout << "Size of long:" << sizeof(long) << std::endl;
    std::cout << "Size of float:" << sizeof(float) << std::endl;
    std::cout << "Size of double:" << sizeof(double) << std::endl;
    std::cout << "Size of long double:" << sizeof(long double) << std::endl;
    std::cout << "Size of unsigned:" << sizeof(unsigned) << std::endl;
    std::cout << "Size of char*" << sizeof(char*) << std::endl;
    enum Day {Mon,Tue,Wed,Thu,Fri,Sat,Sun};
    std::cout << "Size of enum:" << sizeof(Day) << std::endl;
}
