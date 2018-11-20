class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i=0;
    int j=0;
    int k=0;
    vector<int> nums3;
    while(j<n||i<m)
    {
        if(j>=n){
            nums3.push_back(nums1[i++]);
        }
        else if(i>=m)
        {
            nums3.push_back(nums2[j++]);
        }
        else if(nums1[i]<=nums2[j])
        {
            nums3.push_back(nums1[i++]);
        }
        else
        {
            nums3.push_back(nums2[j++]);
        }
    }
    nums1=nums3;
    }
};
