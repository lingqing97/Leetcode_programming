class Solution {
public:
    int numDecodings(string s) {
      int n=s.size();
      if(n==0) return 0;
      int p[n+1]={0};
      p[n]=1;
      p[n-1]=(s[n-1]=='0'?0:1);
      for(int i=n-2;i>=0;i--)
      {
          if(s[i]=='0') continue;
          else p[i]+=p[i+1];
          if(s[i]=='1'||(s[i]=='2'&&s[i+1]<='6'))
              p[i]+=p[i+2];
      }
      return p[0];
    }
};
