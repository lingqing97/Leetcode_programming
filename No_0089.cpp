class Solution {
public:
    vector<int> grayCode(int n) {
    vector<int> ret;
    bitset<32> bitval;  //32位，全为0
    trackback(ret,bitval,n);
    return ret;
    }
private:
    void trackback(vector<int>& ret,bitset<32>& bitval,int k)
    {
        if(k==0)
        {
            ret.push_back(bitval.to_ulong());   //将bitset转化为无符号长整型
            return;
        }
        else
        {
            trackback(ret,bitval,k-1);
            bitval.flip(k-1);       //对指定位取反
            trackback(ret,bitval,k-1);
        }
    }
};
