class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()) return 0;
        int i=1;
        int temp=nums[0];
        for(int j=0;j<nums.size();j++)
        {
            if(nums[j]!=temp)
            {
                temp=nums[j];
                nums[i++]=nums[j];
            }
        }
        return i;
    }
};
