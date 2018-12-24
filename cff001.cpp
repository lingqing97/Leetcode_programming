#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

int main()
{
	vector<int> v;
	int a;
	while(cin>>a&&a!=0)
	{
	v.push_back(a);
	}
	v.push_back(a);
	long long score=0;
	int mul=0;
	for(int i=0;i<v.size();i++)
	{
		if(v[i]==0) break;
		if(v[i]==1)
		{
			score+=1;
			mul=0;
		}
		if(v[i]==2)
		{
			mul++;
			score+=2*mul;
		}
	}
	cout<<score;
	return 0;
 } 
