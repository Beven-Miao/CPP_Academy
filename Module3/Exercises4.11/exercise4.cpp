/* Print out the letters 'a'...'z' and
 * the digits '0'...'9' and their integer values*/
#include <iostream>
#include <iomanip>

int main()
{
    char c;
    //output a-z
    for(c = 'a'; c != ('z'+1); c++)
    {
        std::cout << c << " ";
    }
    std::cout << std::endl;
    
    //output 0-9
    for(c = '0'; c != ('9'+1); c++)
    {
        std::cout << c << " ";
    }
    std::cout << std::endl;
    
    //output some other character
    for(;c != 'A'; c++)
    {
        std::cout << c << " ";
    }
    std::cout << std::endl;
    
    //output by hexadecimal
    std::cout << "output in hexadecimal:" << std::endl;
    for(c = '0'; c != ('Z'+1); c++)
    {
        std::cout << std::hex << c << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
