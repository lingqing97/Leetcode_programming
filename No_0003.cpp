#include <iostream>
#include <string>
int lengthOfLongestSubstring(string s) {
	vector<string> str_val;
	string str = "";
	string longest_str = "";
	for (int i = 0; i < s.size(); i++)
	{
		if (str.find(s[i]) != string::npos)
		{
			str += s[i];
		}
		else
		{
			str_val.push_back(str);
			str = "";
			str += s[i];
		}
	}
	for (int i = 0; i < str_val.size(); i++)
	{
		if (str_val[i] > longest_str)
			longest_str = str_val[i];
	}
	return longest_str.size();
}
int main()
{
	string str = "abcabcbb";
	std::cout << lengthOfLongestSubstring(str);
	return 0;
}