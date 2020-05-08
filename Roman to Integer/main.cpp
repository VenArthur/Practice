#include <iostream>
#include <string>

int romanToInt(std::string s);

int main()
{
	std::cout << romanToInt("MMXX");

	std::cout << std::endl;
	system("PAUSE");
	return 0;
}

int romanToInt(std::string s)
{
	int number = 0;

	for (int i = 0; i < s.length(); i++)
	{
		switch (s[i])
		{
		case 'M':
			number += 1000;
			break;
		case 'D':
			number += 500;
			break;
		case 'C':
			if (s[i + 1] == 'M')
			{
				number += 900;
				i += 1;
			}
			else if (s[i + 1] == 'D')
			{
				number += 400;
				i += 1;
			}
			else
			{
				number += 100;
			}
			break;
		case 'L':
			number += 50;
			break;
		case 'X':
			if (s[i + 1] == 'C')
			{
				number += 90;
				i += 1;
			}
			else if (s[i + 1] == 'L')
			{
				number += 40;
				i += 1;
			}
			else
			{
				number += 10;
			}
			break;
		case 'V':
			number += 5;
			break;
		case 'I':
			if (s[i + 1] == 'X')
			{
				number += 9;
				i += 1;
			}
			else if (s[i + 1] == 'V')
			{
				number += 4;
				i += 1;
			}
			else
			{
				number += 1;
			}
			break;
		}
	}

	return number;
}