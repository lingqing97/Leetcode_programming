#include <iostream>
using namespace std;
struct child
{
	int num;
	child* next;
	child(int num,child* next)
	{
		this->num=num;
		this->next=next;
	}	
};
child* deleteNode(child* curr)
{
	child* before=curr;
	for(;before->next!=curr;before=before->next);
	before->next=curr->next;
	return before->next; 
}
int main()
{
	int n;
	int k;
	cin>>n;
	cin>>k;
	child first(1,NULL);
	child* before=&first;
	for(int i=2;i<=n;i++)
	{
		child temp(i,NULL);
		before->next=&temp;
		before=&temp;
	}
	before->next=&first;
	child* curr=&first;
	for(int i=0;i<n;i++)
	{
		cout<<curr->num<<endl;
		curr=curr->next;
	}
//	int count=n;
//	int c=0;
//	child* curr=&first;
//	while(count>1)
//	{
//		c++;
//		cout<<"curr->num:"<<curr->num<<endl;
//		if(c%k==0)
//		{
//		curr=deleteNode(curr);
//		count--;
//		}
//		else
//		curr=curr->next;
//	}
//	cout<<curr->num;
	return 0;
}
