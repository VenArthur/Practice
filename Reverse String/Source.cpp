#include <iostream>
#include <string>

std::string reverse(std::string word);

int main()
{
	//For prompt to loop again
	char goAgain = 'f';

	do
	{
		//String you want to reverse
		std::cout << "Enter a word or sentence to get the reverse of it \n" << std::endl;
		std::string myString = "";
		std::getline(std::cin, myString);

		//Result
		std::cout << std::endl;
		std::cout << myString << "  = " << reverse(myString) << std::endl;

		//Prompt to go again
		std::cout << "\n\n\n\nTo reverse another word or sentence press f" << std::endl;
		std::cin >> goAgain;
		std::cin.ignore();
		std::cout << "\n\n\n";

	} while (goAgain == 'f');

	//Keeps console window open
	std::cin.get();

	return 0;
}

std::string reverse(std::string word)
{
	std::string backwards = "";

	for (int i = word.length(); i >= 0; i--)
	{
		backwards.push_back(word[i]); 
	}

	return backwards;
}