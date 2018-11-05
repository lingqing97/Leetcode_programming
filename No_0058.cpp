class Solution {
public:
    int lengthOfLastWord(string s) {
     int length;
     if(s.size()==0) return 0;
     istringstream istr;
     istr.str(s);
     vector<string> temp;
     string temp_str;
     while(istr>>temp_str)
     {
         temp.push_back(temp_str);
     }
     return temp.size()==0?0:temp.back().size();
    }
};
