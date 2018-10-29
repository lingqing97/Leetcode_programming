class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> temp;
        sort(candidates.begin(),candidates.end());
        backtrack(result,candidates,target,temp,0,0);
        return result;
    }
private:
    void backtrack(vector<vector<int>>& result,const vector<int>& candidates,int target,vector<int>& temp,int temp_sum,int k)
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
                if(i>k&&candidates[i]==candidates[i-1]) continue;
                temp_sum+=candidates[i];
                temp.push_back(candidates[i]);      
                if(temp_sum<=target)
                    backtrack(result,candidates,target,temp,temp_sum,i+1);
                temp_sum-=candidates[i];
                temp.pop_back();
            }
        }
    }
};
