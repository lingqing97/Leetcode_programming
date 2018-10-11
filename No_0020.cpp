class Solution {
public:
    bool isValid(string s) {
      if(s.empty()) return true;
     stack<char> cp;
     cp.push(s[0]);
     for(int i=1;i<s.size();i++)
     {
         char ch=s[i];
         if(isRightCp(ch))
         {
             if(!cp.empty())
             {
                 char leftch=cp.top();
                 cp.pop();
                 if(!isEqual(leftch,ch)) 
                 {
                     return false;
                 }
             }
             else
             {
                 return false;
             }
         }
         else
         {
             cp.push(ch);
         }
     }
     if(cp.empty())
     return true;
     else 
     return false;
    }
private:
    bool isRightCp(char ch)
    {
        if(ch==']'||ch==')'||ch=='}')
            return true;
        else
            return false;
    }
    bool isEqual(char ch1,char ch2)
    {
        if(ch1=='('&&ch2==')')
            return true;
        else if(ch1=='['&&ch2==']')
            return true;
        else if(ch1=='{'&&ch2=='}')
            return true;
        else
            return false;
    }
};
