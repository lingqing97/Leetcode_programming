class Solution {
public:
string longestPalindrome(string s) {
    if(s==""||s.length()<1) return "";
    int start=0,end=0;
    for(int i=0;i<s.size();i++)
    {
        int len1=palindrome(s,i,i);
        int len2=palindrome(s,i,i+1);
        int len=(len1>len2?len1:len2);
        if(len>(end-start))
        {
            start=i-(len-1)/2;
            end=i+len/2;
        }
    }
    return string(&s[start],&s[end+1]);
}
private:
    int palindrome(string s,int low,int high)
    {
        int i=low,j=high;
        while(i>=0&&j<s.size()&&(s[i]==s[j]))
        {
            i--;
            j++;
        }
        return j-i-1;
    }
};
