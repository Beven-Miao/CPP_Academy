#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<int> numbers(10);
    for(int i = 0; i < 10; i++)
    {
        std::cout << "Input number" << i+1 << " :";
	int number;
	std::cin >> number;
	numbers[i] = number;
    }

    std::vector<int>::iterator iter;
    for(iter = numbers.begin(); iter != numbers.end(); iter++)
    {
        *iter *= 2; 
    }
    std::cout << "New number:" << std::endl;
    for(iter = numbers.begin(); iter != numbers.end(); iter++)
    {
        std::cout << *iter << std::endl;
    }

    return 0;
}
