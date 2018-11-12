class Solution {
public:
    string simplifyPath(string path) {
    string tmp,ret;
    vector<string> v;
    stringstream s(path);
    while(getline(s,tmp,'/'))
    {
        if(tmp==""||tmp==".") continue;
        if(tmp==".."&&!v.empty()) v.pop_back();
        else if(tmp!="..") v.push_back(tmp);
    }
    for(auto str:v)    ret+="/"+str;
    return (v.empty())?"/":ret;
    }
};
