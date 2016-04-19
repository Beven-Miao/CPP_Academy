#include <iostream>
#include <string>
using namespace std;

void connect()
{
	string str1,str2;
	while(cin>>str1){
	if(str1 == "quit"){
		break;
	}
	str2 = str2 + str1;
	cout<<"str2 is:"<<str2<<endl;
	}
}

void separate()
{
	string str1,str2;
	while(cin>>str1){
	if(str1 == "quit"){
		break;
	}
	str2 = str2 + str1 + " ";
	cout<<"str2 is:"<<str2<<endl;
	}
}

int main()
{
	string str;
	int num;
	while(1){
		cout<<"Please type 1 or 2 to choose the function "<<endl;
		cin>>num;
		switch(num){
		case 1: connect();break;
		case 2: separate();break;
		default: cout<<"please type the right num"<<endl;return 0;
		}
	}
	return 0;
}

