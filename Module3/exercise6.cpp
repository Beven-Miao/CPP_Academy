/* Calculate and print the sum od each pair of adjacent element in the vector 
 * and output the odd number without summing it*/
#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<int> Container;
    int ContainerSize;
    int temp = 0;

    std::cout << "Please input ContainerSize" << std::endl;
    std::cin >> ContainerSize;  //input size of container

    for (int i = 0; i < ContainerSize; i++)
    {
        std::cout << "Enter element " << i << std::endl;
	std::cin >> temp;
	Container.push_back(temp);
    }

    for(int i = 0; i < ContainerSize; i++)
    {
        if(i == ContainerSize-1)
	{
	    std::cout << "odd number: ";
	}
	std::cout << Container[i] + Container[++i] << std::endl;
    }
	
    return 0;
}
