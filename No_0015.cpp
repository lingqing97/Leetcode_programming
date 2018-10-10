class Solution {
public:
vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> result;
    if(nums.size()<3) return result;
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size();i++)
    {
        int tsum=-nums[i];
        int front=i+1;
        int back=nums.size()-1;
        while(front<back)
        {
            int sum=nums[front]+nums[back];
            if(sum<tsum)
            {
                front++;
            }
            else if(sum>tsum)
            {
                back--;
            }
            else
            {
                vector<int> target(3,0);
                target[0]=nums[i];
                target[1]=nums[front++];
                target[2]=nums[back--];
                result.push_back(target);
                while(front<back&&nums[back]==target[2]) back--;
                while(front<back&&nums[front]==target[1]) front++;     //过滤重复项
            }
        }
        while(i+1<nums.size()&&nums[i+1]==nums[i]) i++;      //过滤重复项
    }
    return result;
}
};
