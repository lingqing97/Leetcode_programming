#include <iostream>
#include <string>
using namespace std; 
string addBinary(string a, string b) {
    string result;
    string aa=(a.size()>b.size())?a:b;
    string bb=(a.size()<=b.size())?a:b;
    int n=aa.size()-1;
    int before=0;
    int i=n;
    int j=bb.size()-1;
    while(i>=(-1))
    {
        int temp_1=((i>=0)?(aa[i]-'0'):0);
        int temp_2=((j>=0)?(bb[j]-'0'):0);
        int sum=(temp_1+temp_2+before)%2;
        int before=(temp_1+temp_2+before)/2;
        cout<<char(sum+'0')<<endl;
    	result+=char(sum+'0');
    	i--;
    	j--;
    }
    cout<<result;
    string ret="";
    for(int i=result.size()-1;i>=0;i--)
        ret+=result[i];
    return ret;
    }
int main(int argc,char** argv)
{
	string a="11";
	string b="1";
	cout<<addBinary(a,b);
	return 0;
}
