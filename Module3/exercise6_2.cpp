#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	vector<int> Container;
	int ContainerSize;
	int temp = 0;

	cout<<"Please input ContainerSize"<<endl;
	cin>>ContainerSize;  //input size of container

	for (int i = 0; i < ContainerSize; i++)
	{
		cout<<"Enter element "<<i<<" :"<<endl;
		cin>>temp;
		Container.push_back(temp);
	}

	for(int i = 0; i < (ContainerSize+1)/2; i++){
		if(i == ContainerSize/2 && ContainerSize%2 ==1)
		{
		cout<<"odd number: "<<Container[i]<<endl;
		return 0;
		}
		cout<<"sum of "<<i<<" : "<<Container[i]+Container[ContainerSize-i-1]<<endl;
    }
	
    return 0;
}
