//SUCCESS!!
//Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
//
//An input string is valid if:
//
//Open brackets must be closed by the same type of brackets.
//Open brackets must be closed in the correct order.
//Note that an empty string is also considered valid.
#include <iostream>
#include <string>

bool isValid(std::string s);

int main()
{

	std::string s = "([)]";

	std::cout << isValid(s) << std::endl;

	system("PAUSE");
	return 0;
}


bool isValid(std::string s) 
{
	//An empty string is valid
	if (s.empty())
	{
		return true;
	}
	else
	{
		//flag for no more valid parentheses found
		bool nothingFound = false;

		while (nothingFound != true)
		{
			//Find valid ()
			size_t parentheses = s.find("()");

			//Valid () was found, remove from string
			if (parentheses != std::string::npos)
			{
				s.erase(parentheses, 2);
			}

			//Find valid {}
			size_t curlyBraces = s.find("{}");

			//Valid {} was found, remove from string
			if (curlyBraces != std::string::npos)
			{
				s.erase(curlyBraces, 2);
			}

			//Find valid []
			size_t brackets = s.find("[]");

			//Valid [] was found, remove from string
			if (brackets != std::string::npos)
			{
				s.erase(brackets, 2);
			}

			//No valid parentheses were found, end loop
			if ((parentheses == std::string::npos) && (curlyBraces == std::string::npos) && (brackets == std::string::npos))
			{
				nothingFound = true;
			}
		}


		if (s.length() >= 1)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
}