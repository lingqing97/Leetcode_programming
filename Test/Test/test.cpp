#include <iostream>
#include <vector>
#include <set>
	using namespace std;

	bool isValidSudoku(vector<vector<char>>& board) {
		for (int i = 0; i < 9; i++)
		{
			set<char> column;
			set<char> row;
			set<string> cells;
			for (int j = 0; j < 9; j++)
			{
				char c = board[i][j];

				if (board[i][j] != '.')
				{
					if (column.find(board[i][j]) !=column.end())
						return false;
					else
						column.insert(board[i][j]);
					if (row.find(board[i][j]) != row.end())
						return false;
					else
						row.insert(board[i][j]);
					int ii = (i / 3) * 3;
					int jj = (j / 3) * 3;
					string temp = c + " in cells " +char('1'+ii-1) + char('1'+jj-1);    //在一个单元格中的数值会产生相同的字符串
					if (cells.find(temp) != cells.end())
						return false;
					else
						cells.insert(temp);
				}
			}
		}
		return true;
	}
	int main(int argc, char** argv)
	{
		vector<vector<char>> v = { {'5', '3', '.', '.', '7', '.', '.', '.', '.'},{'6', '.', '.', '1', '9', '5', '.', '.', '.'},{'.', '9', '8', '.', '.', '.', '.', '6', '.'},{'8', '.', '.', '.', '6', '.', '.', '.', '3'},{'4', '.', '.', '8', '.', '3', '.', '.', '1'},{'7', '.', '.', '.', '2', '.', '.', '.', '6'}
		,{'.', '6', '.', '.', '.', '.', '2', '8', '.'},{'.', '.', '.', '4', '1', '9', '.', '.', '5'},
			{'.', '.', '.', '.', '8', '.', '.', '7', '9'} };
		cout << isValidSudoku(v);
	}