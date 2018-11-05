#include <iostream>
#include <vector>
#include <set>
#include <string>
	using namespace std;

	class Solution {
	public:
		vector<vector<string>> solveNQueens(int n) {
			vector<vector<string>> result;
			int k = 0;
			vector<int> x(n);
			trackback(result, k, x, n);
			return result;
		}
	private:
		bool bound(int k, const vector<int>& x)
		{
			for (int i = 0; i < k; i++)
			{
				if ((x[i] == x[k]) || (abs(i - k) == abs(x[i] - x[k])))
					return false;
			}
			return true;
		}
		void trackback(vector<vector<string>>& result, int k, vector<int>& x, const int n)
		{
			if (k >= n)
			{
				vector<string> temp;
				for (int i = 0; i < n; i++)
				{
					string temp_str = "";
					for (int j = 0; j < n; j++)
					{
						if (j == x[i])
							temp_str += "Q";
						else
							temp_str += ".";
					}
					temp.push_back(temp_str);
				}
				result.push_back(temp);
				return;
			}
			else
			{
				for (int i = 0; i < n; i++)
				{
					int temp = x[k];
					x[k] = i;
					if (bound(k, x))
						trackback(result, k + 1, x, n);
					x[k] = temp;
				}
			}
		}
	};
	int main(int argc, char** argv)
	{
		Solution s;
		vector<vector<string>> result = s.solveNQueens(4);
		for (int i = 0; i < result.size(); i++)
		{
			for (int j = 0; j < result[0].size(); j++)
				cout << result[i][j];
			cout << endl;
		}
	}