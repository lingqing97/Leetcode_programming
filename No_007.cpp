class Solution {
public:
    int reverse(int x) {
        int res=0;
        while(x!=0)
        {
        	//32λ����ȡֵ��Χ-2147483648��2147 483 647 
            int pos=x%10;
            x=x/10;
            if(res>INT_MAX/10||(res==INT_MAX/10&&pos>7)) return 0;	//�ٳ�֮ǰ����Ƿ񳬳���Χ 
            if(res<INT_MIN/10||(res==INT_MIN/10&&pos<-8)) return 0;	//����������ֱ������ 
            res=res*10+pos;
        }
        return res;
    }
};
