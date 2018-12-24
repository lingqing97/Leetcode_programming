#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int merge(const vector<int>& v,int i,int j)
{
	if((j-i)==1) return v[j]-v[i];
	int mid=(i+j)/2;
	int left_min=merge(v,i,mid);
	int right_min=merge(v,mid,j);
	return left_min>right_min?right_min:left_min;
 } 
int main()
{
	int n;
	cin>>n;
	vector<int> v;
	int temp=0;
	for(int i=0;i<n;i++)
	{
		cin>>temp;
		v.push_back(temp);
	 } 
	sort(v.begin(),v.end());
	cout<<merge(v,0,v.size()-1);
	return 0;
}
