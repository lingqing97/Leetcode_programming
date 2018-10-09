class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        string result="";
        char ch;
        bool end=false;
        for(int i=0;i<strs[0].length();i++)
        {
            ch=strs[0].at(i);
            for(auto x:strs)
            {
                if(i==x.length()||ch!=x.at(i))
                {
                    end=true;
                    break;
                }
            }
            if(end) break;
            else
            {
                result+=ch;
            }
        }
        return result;
    }
};
