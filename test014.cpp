#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
struct Node
{
	int num;
	Node* next;
 };

int main()
{
	int n;
	int k;
	cin>>n;
	cin>>k;
	Node* flag;
	flag->next=0;
	Node* temp=new Node;
	if(!temp)
		return -1;
	int i=1;
	while(i<=n)
	{
		temp->num=i;
		temp->next=flag->next;
		flag->next=temp;
		flag=temp;
		delete temp;
		temp=new Node;
		if(!temp)
			return -1;
		i++;
	}
	delete temp;
	for(int i=0;i<n;i++)
	{
		cout<<flag->num<<endl;
		flag=flag->next;
	}
	return 0;
}
