#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

/*SUCCESS!!!!!!*/

//To see twoSum result printed to the screen
void print(std::vector<int> const& input)
{
	for (int i = 0; i < input.size(); i++)
	{
		std::cout << input.at(i) << ' ';
	}
}

vector<int> twoSum(vector<int>& nums, int target)
{
	vector<int> result; //Result to return
	vector<int> search; //Sliced version of nums, so the current index isn't counted
	vector<int>::iterator it; //iterator to look through search vector for the number to find

	for (int i = 0; i < nums.size(); i++)
	{
		int numberToFind = target - nums[i];
		int nextIndex = i + 1;
		search = std::vector<int>(nums.begin() + nextIndex, nums.end());

		it = find(search.begin(), search.end(), numberToFind);

		if (it != search.end())
		{
			int index = std::distance(search.begin(), it);

			index += nextIndex;

			result.push_back(i);
			result.push_back(index);

			break;
		}
	}

	return result;
}

int main(int argc, char* args[])
{

	vector<int> givenNums = { 1, 2, 7, 3 };
	int target = 9;

	print(twoSum(givenNums, target));

	std::cout << "\n\n";

	system("PAUSE");
	return 0;
}