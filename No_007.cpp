class Solution {
public:
    int reverse(int x) {
        int res=0;
        while(x!=0)
        {
        	//32位整数取值范围-2147483648到2147 483 647 
            int pos=x%10;
            x=x/10;
            if(res>INT_MAX/10||(res==INT_MAX/10&&pos>7)) return 0;	//再乘之前检测是否超出范围 
            if(res<INT_MIN/10||(res==INT_MIN/10&&pos<-8)) return 0;	//若超出，则直接跳出 
            res=res*10+pos;
        }
        return res;
    }
};
