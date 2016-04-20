/* output the largest and smallest value of: char, short, int, long, float, double, long double and unsigned*/
#include <iostream>
#include <string>
#include <limits>

int main()
{
    std::cout << "largest char: " << std::numeric_limits<char>::max() << std::endl;
    std::cout << "smallest char: " << std::numeric_limits<char>::min() << std::endl;
    std::cout << "largest short: " << std::numeric_limits<short>::max() << std::endl;
    std::cout << "smallest short: " << std::numeric_limits<short>::min() << std::endl;
    std::cout << "largest int: " << std::numeric_limits<int>::max() << std::endl;
    std::cout << "smallest int: " << std::numeric_limits<int>::min() << std::endl;
    std::cout << "largest long: " << std::numeric_limits<long>::max() << std::endl;
    std::cout << "smallest long: " << std::numeric_limits<long>::min() << std::endl;
    std::cout << "largest float: " << std::numeric_limits<float>::max() << std::endl;
    std::cout << "smallest float: " << std::numeric_limits<float>::min() << std::endl;
    std::cout << "largest double: " << std::numeric_limits<double>::max() << std::endl;
    std::cout << "smallest double: " << std::numeric_limits<double>::min() << std::endl;
    std::cout << "largest long double: " << std::numeric_limits<long double>::max() << std::endl;
    std::cout << "smallest long double: " << std::numeric_limits<long double>::min() << std::endl;
    std::cout << "largest unsigned: " << std::numeric_limits<unsigned>::max() << std::endl;
    std::cout << "smallest unsigned: " << std::numeric_limits<unsigned>::min() << std::endl;
}
