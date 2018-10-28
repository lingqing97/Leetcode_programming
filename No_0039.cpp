class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> temp;
        backtrack(result,candidates,target,temp,0,0);
        return result;
    }
private:
    void backtrack(vector<vector<int>>& result,const vector<int> candidates,int target,vector<int>& temp,int temp_sum,int k)
    {
        if(temp_sum==target)
        {
            result.push_back(temp);
            return;
        }
        else
        {
            for(int i=k;i<candidates.size();i++)
            {
                temp_sum+=candidates[i];
                temp.push_back(candidates[i]);
                if(temp_sum<=target)
                    backtrack(result,candidates,target,temp,temp_sum,i);
                temp_sum-=candidates[i];
                temp.pop_back();
            }
        }
    }
};
