#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
#include <deque>
using namespace std;
bool is_plindrome(string s, int low, int high);
string longestPalindrome(string s) {
	int start, end;
	start = end = 0;
	for (int i = 0; i < s.size(); i++)
	{
		for (int j = i; j < s.size(); j++)
		{
			if (is_plindrome(s, i, j))
			{
				if ((j - i) > (end - start))
				{
					end = j;
					start = i;
				}
			}
		}
	}
	return string(&s[start], &s[end + 1]);
}
bool is_plindrome(string s, int low, int high)
{
	if (low==high) return true;
	else if (high == low + 1) return s[low] == s[low + 1];
	else
	return is_plindrome(s, low - 1, high - 1) && (s[low] == s[high]);
}
int main()
{
	string str = "aba";
	std::cout << longestPalindrome(str);
	return 0;
}