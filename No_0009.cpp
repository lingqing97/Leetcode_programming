class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0||(x%10==0&&x!=0))   //如果是负数肯定不满足要求，同时各位是0（不是0）的数一定不是回文数，因为最高位不能是0
            return false;
        int revertedNumber=0;
        while(x>revertedNumber)
        {
            revertedNumber=revertedNumber*10+x%10;
            x=x/10;
        }    //x每减少一位，revertedNumber也增加一位,当revertedNumber>=x时，revertedNumber获取到右边部分的数,x获取到左半部分的数；
        
        return x==revertedNumber||x==revertedNumber/10;   //位数是偶数或者位数是奇数两种情况
    }
};
