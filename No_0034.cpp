class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result(2);
        if(nums.empty()) {
            return {-1,-1};
        }
        int low=0;
        int high=nums.size()-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[mid]==target)
            {
                int i=mid;
                int j=mid;
                while((i-1)>=0&&nums[i-1]==nums[mid]) i--;
                while((j+1)<nums.size()&&nums[j+1]==nums[mid]) j++;
                result[0]=i;
                result[1]=j;
                return result;
            }
            else if(nums[mid]>target)
                high=mid-1;
            else
                low=mid+1;
        }    
        return {-1,-1};
    }
};
