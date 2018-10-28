#include <iostream>
#include <vector>
#include <set>
#include <string>
	using namespace std;

	string countAndSay(int n) {
		string temp = "";
		string result = "1";
		if (n == 1) return result;
		for (int i = 1; i < n; i++)
		{
			for (int j = 0; j < result.size(); j++)
			{
				if (result[j] == '2')
				{
					j++;
					int count = 1;
					while (j < result.size() && result[j] == '2')
					{
						count++;
						j++;
					}
					char temp_count = count + '1' - 1;
					temp += temp_count;
					temp += '2';
				}
				if (result[j] == '1')
				{
					j++;
					int count = 1;
					while (j < result.size() && result[j] == '1')
					{
						count++;
						j++;
					}
					char temp_count = count + '1' - 1;
					temp += temp_count;
					temp += '1';
				}
			}
			result = temp;
			temp = "";
		}
		return result;
	}
	int main(int argc, char** argv)
	{
		cout<<countAndSay(5);
	}