class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
    int n=obstacleGrid.size();
    int m=obstacleGrid[0].size();
    vector<vector<int> > p(n+1,vector<int>(m+1,0));
    p[0][1]=1;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            if(!obstacleGrid[i-1][j-1]) //p[i][j]与obstacleGrid[i-1][j-1]相对应
                p[i][j]=p[i][j-1]+p[i-1][j];
    return p[n][m];
    }
};
