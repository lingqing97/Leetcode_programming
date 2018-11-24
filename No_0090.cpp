class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    vector<vector<int>> ret;
    sort(nums.begin(),nums.end());
    vector<int> temp;
    trackback(ret,nums,temp,0);
    return ret;
    }
private:
    void trackback(vector<vector<int>>& ret,const vector<int>& nums,vector<int>& temp,int begin)
    {
        ret.push_back(temp);
        for(int i=begin;i<nums.size();i++)
        {
            if(i==begin||nums[i-1]!=nums[i])
            {
                temp.push_back(nums[i]);
                trackback(ret,nums,temp,i+1);
                temp.pop_back();
            }
        }
    }
};
