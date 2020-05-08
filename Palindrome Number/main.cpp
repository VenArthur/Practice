#include <iostream>
#include <string>

bool isPalindrome(int x);

int main()
{

	std::cout << isPalindrome();

	std::cout << std::endl;
	system("PAUSE");
	return 0;
}

bool isPalindrome(int x)
{
	if (x < 0)
	{
		return false;
	}
	else
	{
		std::string number = std::to_string(x);
		std::string reversed;

		for (int i = number.length() - 1; i >= 0; i--)
		{
			reversed.push_back(number[i]);
		}

		if (number == reversed)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}