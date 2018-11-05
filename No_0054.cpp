class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
    if(matrix.size()==0) return vector<int>();
    int n=matrix.size();
    int col=matrix[0].size();
    vector<int> result;
    vector<vector<bool>> m(n);
    for(int i=0;i<n;i++)
        for(int j=0;j<col;j++)
            m[i].push_back(false);
    int count=0,i=0,j=0;
    int di=0;
    int dx[]={0,1,0,-1};
    int dy[]={1,0,-1,0};
    while(count<n*col)
    {
        m[i][j]=true;
        int temp=matrix[i][j];
        result.push_back(temp);
        count++;
        int ii=i+dx[di];
        int jj=j+dy[di];
        if(ii>=0&&jj>=0&&ii<n&&jj<col&&!m[ii][jj])
        {
            i=ii;
            j=jj;
        }
        else
        {
            di=(di+1)%4;
            i+=dx[di];
            j+=dy[di];
        }
    }
        return result;
    }
};
