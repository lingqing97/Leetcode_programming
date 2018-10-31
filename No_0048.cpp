class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
     //��ת��
     int n=matrix.size();
     for(int i=0;i<n;i++)
         for(int j=i;j<n;j++)
             swap(matrix,i,j,j,i);
     //��ˮƽ�û�
     for(int i=0;i<n;i++)
         for(int j=0;j<n/2;j++)
             swap(matrix,i,j,i,matrix.size()-1-j);
    }
private:
    void swap(vector<vector<int>>& matrix,int i,int j,int x,int y)
    {
        int temp=matrix[i][j];
        matrix[i][j]=matrix[x][y];
        matrix[x][y]=temp;
    }
};
