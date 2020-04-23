/*
SUCCESS!!
Write a function to find the longest common prefix string amongst an array of strings.
If there is no common prefix, return an empty string ""
*/
#include <iostream>
#include <string>
#include <vector>


std::string longestCommonPrefix(std::vector<std::string>& strs);


int main()
{

	std::vector<std::string> words = { "minute","minimum","mint" };


	std::cout << longestCommonPrefix(words) << std::endl;
	


	system("PAUSE");
	return 0;
}

std::string longestCommonPrefix(std::vector<std::string>& strs)
{
	//Return if empty
	if (strs.empty())
	{
		return "";
	}

	std::string prefix = ""; //the prefix
	char my_char = ' '; //character to compare
	bool endOfPrefix = false; //flag for not pushing an incorrect character to the prefix

	for (int i = 0; i <= strs[0].length(); i++) //to cycle through each letter
	{
		for (int j = 0; j < strs.size(); j++) //to cycle through each word
		{
			//set the letter that needs to be compared
			if (j == 0) 
			{
				my_char = strs[j][i];
			}

			//If a letter is not the same then the prefix has ended
			if (my_char != strs[j][i])
			{
				endOfPrefix = true;
				break;
			}
		}

		//The letter was not the same the prefix has ended
		if (endOfPrefix == true)
		{
			break;
		}
		else 
		{
			prefix.push_back(my_char); //The letter was the same for all words, it is part of the prefix
		}
	}

	return prefix;
}