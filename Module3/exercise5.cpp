#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s1,s2;
	cout<<"Please input a string"<<endl;
	cin>>s1;
	for(int i = 0; i<s1.size(); i++)
		//judge if the character is punctuation
		if(ispunct(s1[i]) == false)
			s2 += s1[i];
	cout<<s2<<endl;
	
	return 0;
}
