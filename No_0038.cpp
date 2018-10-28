class Solution {
public:
    string countAndSay(int n) {
        string temp = "";
		string result = "1";
		if (n == 1) return result;
		for (int i = 1; i < n; i++)
		{
			for (int j = 0; j < result.size(); j++)
			{
				char target=result[j];
				int count = 1;
				while (j+1 < result.size() && result[j+1] == target)
				{
					count++;
					j++;
				}
				char temp_count = count + '1' - 1;
				temp += temp_count;
				temp += target;
			}
			result = temp;
			temp = "";
		}
		return result;
    }
};
