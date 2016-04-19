#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::string str;
    std::vector <std::string> Container;
    std::cout<<"input words,imput quit to stop"<<std::endl;
    while(1)
    {
	std::cin >> str;
	if(str == "quit")
	{
            break;	
	}
        Container.push_back(str);
    }
    
    int wordsperline = 0;
    for(int i = 0; i < Container.size(); i++ )
    {
        std::string word = Container[i];
	for(int j = 0; j < word.size(); j++)
	{
	    word[j] = toupper(word[j]);
	}
	std::cout << word<<" ";
        wordsperline++;
        if(wordsperline == 8)
        {
            std::cout<<std::endl;
	    wordsperline = 0;
        }
        else
        {
            std::cout<<" ";
        }
    }
}
