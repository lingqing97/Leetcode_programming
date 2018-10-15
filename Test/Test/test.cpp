#include <iostream>
#include <vector>

	using namespace std;

	int removeDuplicates(vector<int>& nums)
	{
		int i = 1;
		int temp = nums[0];
		for (int j = 0; j < nums.size(); j++)
		{
			if (nums[j] != temp)
			{
				temp = nums[j];
				nums[i] = nums[j];
				i++;
			}
		}
		return i;
	}
	int main(int argc, char** argv)
	{
		vector<int> nums = { 1,1,2 };
		removeDuplicates(nums);
	}