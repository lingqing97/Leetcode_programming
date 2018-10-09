#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
#include <deque>
#include <set>
using namespace std;
bool isfind(vector<int>& it1, vector<vector<int>> v)
{
	sort(it1.begin(), it1.end());
	bool result = false;
	if (v.empty()) return false;
	for (auto x : v)
	{
		sort(x.begin(), x.end());
		int i = 0;
		for (; i < 3; i++)
			if (it1[i] != x[i])
				break;
		if (i < 3) continue;
		return true;
	}
	return false;
}
vector<vector<int>> threeSum(vector<int>& nums) 
{
	vector<vector<int>> result;
	if (nums.empty()) return result;
	if (nums.size() < 3) return result;
	vector<int> v;
	for (int i = 0; i < (nums.size() - 2); i++)
	{
		for (int j = i + 1; j < (nums.size() - 1); j++)
			for (int z = j + 1; z < nums.size(); z++)
			{
				if ((nums[i] + nums[j] + nums[z]) == 0)
				{
					v.push_back(nums[i]);
					v.push_back(nums[j]);
					v.push_back(nums[z]);
					if(!isfind(v,result))
						result.push_back(v);
					v.clear();
				}
			}
	}
	return result;

}
int main()
{
	vector<int> nums = { -1,0,1,2,-1,-4 };
	vector<vector<int>> result = threeSum(nums);
	if(!result.empty())
	for (auto x : result)
	{
		for (auto y : x)
			cout << y << " ";
		cout << endl;
	}
	return 0;
}