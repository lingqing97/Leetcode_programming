class Solution {
public:
    string multiply(string num1, string num2) {
        int n1=num1.size();
        int n2=num2.size();
        int* pos=new int[n1+n2];
        for(int i=n1-1;i>=0;i--)
        {
            for(int j=n2-1;j>=0;j--)
            {
                int mult=(num1.at(i)-'0')*(num2.at(j)-'0');
                int p1=i+j;
                int p2=i+j+1;
                int sum=mult+pos[p2];
                
                pos[p1]+=sum/10;
                pos[p2]=sum%10;
            }
        }
        string sb="";
        for(int k=0;k<(n1+n2);k++)
        {
            if(!(sb.length()==0&&pos[k]==0))
            {
                char temp=pos[k]+'0';
                sb+=temp;
            }
        }
        delete[] pos;
        return (sb==""?"0":sb);
    }
};
