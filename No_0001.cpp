class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> m;
        vector<int> v;
        for(int i=0;i<nums.size();i++)
        {
            int temp=target-nums[i];
            if(m.find(temp)!=m.end())
            {
                v.push_back(m.at(temp));
                v.push_back(i);
                return v;
            } 
            m.insert(pair<int,int>(nums[i],i));
        }
        return v;
    }
};
