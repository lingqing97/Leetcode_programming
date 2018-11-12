class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
    vector<vector<int>> result;
    vector<int> temp;
    trackback(n,k,1,result,temp);
    return result;
    }
private:
    void trackback(int n,int k,int t,vector<vector<int>>& result,vector<int>& temp)
    {
        if(k==0)
        {
            result.push_back(temp);
            return;
        }
        else
        {
            for(int i=t;i<=n;i++)
            {
                temp.push_back(i);
                trackback(n,k-1,i+1,result,temp);
                temp.pop_back();
            }
        }
    }
};
