class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
       vector<vector<int>> result;
       backtrack(result,nums,0);
       return result;
    }
private:
    void swap(vector<int>& nums,int i,int j)
    {
        int temp=nums[i];
        nums[i]=nums[j];
        nums[j]=temp;
    }
    void backtrack(vector<vector<int>>& result,vector<int>& nums,int t)
    {
        if(t>=nums.size())
        {
            result.push_back(nums);
            return;
        }
        else
        {
            for(int i=t;i<nums.size();i++)
            {
                swap(nums,i,t);
                backtrack(result,nums,t+1);
                swap(nums,i,t);
            }
        }
    }
};
