class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_area=0;
        int left=0,right=height.size()-1;   //������������ָ��
        while(left<right)
        {
            int area=(height[left]>height[right]?height[right]:height[left])*(right-left);
            max_area=(max_area>area?max_area:area);
            if(height[left]<height[right])  left++;
            else right--;       //�ƶ�����:ʼ���ƶ��߶Ƚ�С��ָ��
        }
        return max_area;
    }
};
