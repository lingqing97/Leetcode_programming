class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0||(x%10==0&&x!=0))   //����Ǹ����϶�������Ҫ��ͬʱ��λ��0������0������һ�����ǻ���������Ϊ���λ������0
            return false;
        int revertedNumber=0;
        while(x>revertedNumber)
        {
            revertedNumber=revertedNumber*10+x%10;
            x=x/10;
        }    //xÿ����һλ��revertedNumberҲ����һλ,��revertedNumber>=xʱ��revertedNumber��ȡ���ұ߲��ֵ���,x��ȡ����벿�ֵ�����
        
        return x==revertedNumber||x==revertedNumber/10;   //λ����ż������λ���������������
    }
};
