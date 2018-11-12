class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size()==0) return false;
        int rows=matrix.size();
        int cols=matrix[0].size();
        int low=0,high=rows*cols-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            int ii=mid/cols;
            int jj=mid%cols;
            if(matrix[ii][jj]>target) high=mid-1;
            else if(matrix[ii][jj]==target) return true;
            else
                low=mid+1;
        }
        return false;
    }
};
