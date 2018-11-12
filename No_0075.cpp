class Solution {
public:
    void sortColors(vector<int>& nums) {
    if(nums.empty()) return;
    int count[3]={0};
    int n=nums.size();
    for(int i=0;i<n;i++)
        count[nums[i]]++;
    for(int j=0,i=0;i<n;)
    {
        if(count[j]!=0)
        {
            nums[i++]=j;
            count[j]--;
            if(count[j]==0) j++;
        }
        else
        j++;
    }
    }
};
