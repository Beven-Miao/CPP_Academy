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

	for(int i = 0; i < ContainerSize; i++){
		if(i == ContainerSize-1)
			cout<<"odd number: ";
		cout<<Container[i]+Container[++i]<<endl;
    }
	
    return 0;
}
