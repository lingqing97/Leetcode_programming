class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        n=board.size();
        m=board[0].size();
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
            {
                if(trackback(board,word,i,j,0)) return true;
            }
        return false;
    }
private:
    int n;
    int m;
    bool trackback(vector<vector<char>>& board,string word,int x,int y,int k)
    {
        if(k==word.size()) return true;
        if(x<0||y<0||x>=n||y>=m||board[x][y]!=word[k]) return false;
        board[x][y]^=128;
        bool ret=trackback(board,word,x-1,y,k+1)||trackback(board,word,x,y-1,k+1)||trackback(board,word,x+1,y,k+1)||trackback(board,word,x,y+1,k+1);
        board[x][y]^=128;
        return ret;
    }
};
