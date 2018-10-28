class Solution {
public:
	bool isValidSudoku(vector<vector<char>>& board) {
        int column[9][9]={0};   //记录某一行某个数字是否出现
        int row[9][9]={0};      //记录某一列某个数字是否出现
        int blk[9][9]={0};      //记录某个小格某个数字是否出现
		for (int i = 0; i < 9; i++)
		{
            for(int j=0;j<9;j++)
            {
                if(board[i][j]!='.')
                {
                    int num=board[i][j]-'0'-1;
                    int ii=i/3;
                    int jj=j/3;
                    int k=ii*3+jj;
                    if(column[j][num]||row[i][num]||blk[k][num])
                        return false;
                    column[j][num]=row[i][num]=blk[k][num]=1;   //将标志位置为1
                }
            }
		}
		return true;
	}
};
