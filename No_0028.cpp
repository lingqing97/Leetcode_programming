class Solution {
public:
    int strStr(string haystack, string needle) {
       if(needle=="") return 0;
       if(haystack.length()<needle.length()) return -1;
       int i=0;
       int j=0;
       for(;i<haystack.length();i++)
       {
           if(haystack[i]==needle[j])
           {
               j++;
               if(j==needle.length())   //全部匹配完成，跳出循环
                   break;
           }
           else
           {
               i=i-j;   //一旦不匹配，则从之前匹配的后一个字符重新开始
               j=0;
           }
       }
       return (j==needle.length())?(i-j+1):-1;
    }
};
