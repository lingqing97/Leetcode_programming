class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
       vector<vector<int>> result;
       sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            int three_target=target-nums[i];
            for(int j=i+1;j<nums.size();j++)
            {
                int two_target=three_target-nums[j];
                int left=j+1;
                int right=nums.size()-1;
                while(left<right)
                {
                    int two_sum=nums[left]+nums[right];
                 if(two_sum<two_target)
                     left++;
                 else if(two_sum>two_target)
                     right--;
                  else
                  {
                      vector<int> temp(4,0);
                      temp[0]=nums[i];
                      temp[1]=nums[j];
                      temp[2]=nums[left++];
                      temp[3]=nums[right--];
                      result.push_back(temp);
                      while(left<right&&nums[left]==temp[2]) left++;
                      while(left<right&&nums[right]==temp[3]) right--;
                  }
                }
                while(j+1<nums.size()&&nums[j+1]==nums[j]) j++;
            }
            while(i+1<nums.size()&&nums[i+1]==nums[i]) i++;
        }
        return result;
    }
};
