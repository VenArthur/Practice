#include <iostream>
#include <string>
#include <sstream>

//Given a 32-bit signed integer, reverse digits of an integer.
int reverse(int x);

int main()
{
	//-2^31 = -2147483648, 2^31 = 2147483648

	std::cout << reverse(210);

	system("PAUSE");
	return 0;
}

int reverse(int x)
{
	std::string number;
	std::string reversedNumber;
	bool isNegative = false;

	//Will need for after type conversion
	if (x < 0)
	{
		isNegative = true;
	}
	else
	{
		isNegative = false;
	}

	//Convert the number from int to string 
	number = std::to_string(x);

	//Reverse the number
	for (int i = number.length() - 1; i >= 0; i--)
	{
		reversedNumber.push_back(number[i]);
	}

	//Convert the number from string back to int
	int answer;
	std::istringstream(reversedNumber) >> answer;

	//(INT_MIN)-2^31 = -2147483648, (INT_MAX)2^31 = 2147483648 - if answer is out of range return 0
	if (answer == INT_MAX || answer == INT_MIN)
	{
		return 0;
	}

	//If the original number input was a negative, the answer must be negative
	if (isNegative)
	{
		answer *= -1;
	}


	return answer;
}
