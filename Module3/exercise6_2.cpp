/* Sum the first and last elements, followed by sum of second and second-to-last and so on */
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

    //input element to the vector
    for (int i = 0; i < ContainerSize; i++)
    {
        std::cout << "Enter element " << i << std::endl;
	std::cin >> temp;
	Container.push_back(temp);
    }
   
    //sum the elements
    for(int i = 0; i < (ContainerSize+1)/2; i++)
    {
        if(i == ContainerSize/2 && ContainerSize%2 == 1)//wheather the element is the middle of vector
	{
	    std::cout << "odd number: " << Container[i] << std::endl;
	    return 0;
	}
        std::cout << "sum of " << i << " is: " << Container[i] + Container[ContainerSize-i-1] << std::endl;
    }
	
    return 0;
}
