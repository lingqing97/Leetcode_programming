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
               if(j==needle.length())   //ȫ��ƥ����ɣ�����ѭ��
                   break;
           }
           else
           {
               i=i-j;   //һ����ƥ�䣬���֮ǰƥ��ĺ�һ���ַ����¿�ʼ
               j=0;
           }
       }
       return (j==needle.length())?(i-j+1):-1;
    }
};
