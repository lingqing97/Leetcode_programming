class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> result;
    int n=nums.size();
    for(int i=0;i<=n;i++)
    {
        vector<int> temp;
        trackback(nums,result,temp,i,0,n);
    }
    return result;
    }
private:
    void trackback(const vector<int>& nums,vector<vector<int>>& result,vector<int>& temp,int k,int t,int n)
    {
        if(k==0)
        {
            result.push_back(temp);
            return;
        }
        else
        {
            for(int i=t;i<n;i++)
            {
                temp.push_back(nums[i]);
                trackback(nums,result,temp,k-1,i+1,n);
                temp.pop_back();
            }
        }
    }
};
