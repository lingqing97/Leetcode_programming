class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
     vector<int> result;
     int before=1;
     for(int i=digits.size()-1;i>=(-1);i--)
     {
      if(i==(-1))
      {
          if(before==0)
              break;
          else
              result.push_back(before);
      }
      else
      {
          result.push_back((before+digits[i])%10);
          before=(before+digits[i])/10;
      }
     }
     vector<int> ret(result.size());
     int j=result.size()-1;
     for(auto x:result)
         ret[j--]=x;
      return ret;
    }
};
