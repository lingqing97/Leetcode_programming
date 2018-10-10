#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
#include <deque>
#include <set>
#include <map>
using namespace std;
vector<vector<int>> threeSum(vector<int>& nums) {
	vector<vector<int>> result;
	if (nums.size() < 3) return result;
	sort(nums.begin(), nums.end());
	for (int i = 0; i < nums.size() - 2; i++)
	{
		int tsum = -nums[i];
		int front = i + 1;
		int back = nums.size() - 1;
		while (front < back)
		{
			int sum = nums[front] + nums[back];
			if (sum < tsum)
			{
				front++;
			}
			else if (sum > tsum)
			{
				back--;
			}
			else
			{
				vector<int> target(3,0);
				target[0] = nums[i];
				target[1] = nums[front];
				target[2] = nums[back];
				result.push_back(target);
				while (front < back&&nums[++front] == target[1]) front++;     //过滤重复项
				while (front < back&&nums[--back] == target[2]) back--;
			}
		}
		while (nums[i + 1] == nums[i]) i++;      //过滤重复项
	}
	return result;
}
int main()
{
	vector<int> str = { -1, 0, 1, 2, -1, -4 };
	vector<vector<int>> result = threeSum(str);
	for (auto x : result)
	{
		for (auto y : x)
			cout << y << " ";
		cout << endl;
	}
	return 0;
}