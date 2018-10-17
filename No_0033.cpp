class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0;
        int height=nums.size()-1;
        while(low<=height)
        {
            int mid=(low+height)/2;
            if(target==nums[mid]) return mid;
            if(nums[low]<=nums[mid])
            {
                if(nums[low]<=target&&target<=nums[mid])
                    height=mid-1;
                else
                    low=mid+1;
            }
            else
            {
                if(nums[mid]<=target&&target<=nums[height])
                    low=mid+1;
                else
                    height=mid-1;
            }
        }
        return -1;
    }
};
