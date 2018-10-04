class Solution {
public:
    int romanToInt(string s) {
        map<char,int> m;
        m.insert(pair<char,int>('a',0));
        m.insert(pair<char,int>('I',1));
        m.insert(pair<char,int>('V',5));
        m.insert(pair<char,int>('X',10));
        m.insert(pair<char,int>('L',50));
        m.insert(pair<char,int>('C',100));
        m.insert(pair<char,int>('D',500));
        m.insert(pair<char,int>('M',1000));
        int num=0;
        char last='a';  //³õÊ¼±È½Ï
        for(int i=0;i<s.size();i++)
        {
            if(m[last]<m[s[i]])
                num=num-2*m[last]+m[s[i]];
            else
                num=num+m[s[i]];            
            last=s[i];            
        }
        return num;
    }
};
