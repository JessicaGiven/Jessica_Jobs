#include <stdio.h>
#include <vector>
#include <map>

using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
	map <int, int> valueIndex;
	int n = nums.size();
	for (int i = 0; i < n; ++i)
	{
		int value = target - nums[i];

		auto iter = valueIndex.find(value);
		if (iter != valueIndex.end())
		{
			return{ iter->second, i + 1 };
		}
		valueIndex.insert({ nums[i], i + 1 });
	}
	return{};
};

int main()
{
	int buf[4] = { 2, 7, 11, 15 };
	vector<int> num;
	for (int i = 0; i < 4; i++)
	{
		num.push_back(buf[i]);
	}
	int target = 9;

	vector<int> result = twoSum(num, target);

	return 0;
}