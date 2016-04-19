/* Strip the punctuation from a string */
#include<iostream>
#include<string>

int main()
{
    std::string s1;
    std::string s2;
    std::cout << "Please input a string" << std::endl;
    std::cin >> s1;
    for(int i = 0; i < s1.size(); i++)
    {
        //judge if the character is punctuation
	if(ispunct(s1[i]) == false)
	{
	    s2 += s1[i];
	}
    }
    std::cout << s2 << std::endl;
    
    return 0;
}
