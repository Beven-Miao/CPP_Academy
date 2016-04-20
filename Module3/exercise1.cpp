/* show the largest number that can be assigned to short and unsigned short */
#include <iostream>
#include <limits>

int main()
{
    std::cout << "short max=" << std::numeric_limits<short>::max() << std::endl;
    std::cout << "unsigned short max=" << std::numeric_limits<unsigned short>::max() << std::endl;
    return 0;
}
