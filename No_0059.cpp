class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
    vector<vector<bool> > m(n);
    vector<vector<int> > result(n);   
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            m[i].push_back(false);
            result[i].push_back(0);
        }
    }
    int count=0;
    int di=0;
    int dx[]={0,1,0,-1};
    int dy[]={1,0,-1,0};
    int i=0,j=0;
    while(count<n*n)
    {
        result[i][j]=count+1;
        m[i][j]=true;
        int ii=i+dx[di];
        int jj=j+dy[di];
        if(ii>=0&&jj>=0&&ii<n&&jj<n&&!m[ii][jj])
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
        count++;
    }
    return result;
    }
};
