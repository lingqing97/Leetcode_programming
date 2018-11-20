class Solution {
public:
    vector<int> grayCode(int n) {
    vector<int> ret;
    bitset<32> bitval;  //32λ��ȫΪ0
    trackback(ret,bitval,n);
    return ret;
    }
private:
    void trackback(vector<int>& ret,bitset<32>& bitval,int k)
    {
        if(k==0)
        {
            ret.push_back(bitval.to_ulong());   //��bitsetת��Ϊ�޷��ų�����
            return;
        }
        else
        {
            trackback(ret,bitval,k-1);
            bitval.flip(k-1);       //��ָ��λȡ��
            trackback(ret,bitval,k-1);
        }
    }
};
