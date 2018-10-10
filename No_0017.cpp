class Solution {
public:
    vector<string> m;
    void dfs(string& s,vector<string>& result,string digits,int pos)
    {
        if(pos==digits.size())
        {
            result.push_back(s);
            return;
        }
        else
        {
            for(auto ch:m[digits[pos]-'0'])
            {
                s+=ch;
                dfs(s,result,digits,pos+1);
                s.pop_back();
            }
        }
    }
    vector<string> letterCombinations(string digits) 
    {
        m={"0","1","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string> result;
        if(digits.empty()) return result;
        string s;
        dfs(s,result,digits,0);
        return result;
    }
};
