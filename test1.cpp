#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;
int main(int argc,char** argv)
{
	int n;
	cin>>n;
	vector<string> in(n);
	vector<string> b_str;
	vector<string> result;
	for(int i=0;i<n;i++)
	cin>>in[i];
	//先转换为二进制
	map<char,string> m;
	m.insert(pair<char,string>('0',"0000"));
	m.insert(pair<char,string>('1',"0001"));
	m.insert(pair<char,string>('2',"0010"));
	m.insert(pair<char,string>('3',"0011"));
	m.insert(pair<char,string>('4',"0100"));
	m.insert(pair<char,string>('5',"0101"));
	m.insert(pair<char,string>('6',"0110"));
	m.insert(pair<char,string>('7',"0111"));
	m.insert(pair<char,string>('8',"1000"));
	m.insert(pair<char,string>('9',"1001"));
	m.insert(pair<char,string>('A',"1010"));
	m.insert(pair<char,string>('B',"1011"));
	m.insert(pair<char,string>('C',"1100"));
	m.insert(pair<char,string>('D',"1101"));
	m.insert(pair<char,string>('E',"1110"));
	m.insert(pair<char,string>('F',"1111"));
	for(int i=0;i<n;i++)
	{
		string temp="";
		for(int j=in[i].size()-1;j>=0;j--)
		{
		temp+=m[in[i][j]];
		}
		int count_0=3-temp.size()%3;
		for(int j=0;j<count_0;j++)
		temp+='0';
		b_str.push_back(temp);
	 };
	//再转八进制
	map<string,char> p;
	p.insert(pair<string,char>("000",'0'));
	p.insert(pair<string,char>("001",'1'));
	p.insert(pair<string,char>("010",'2'));
	p.insert(pair<string,char>("011",'3'));
	p.insert(pair<string,char>("100",'4'));
	p.insert(pair<string,char>("101",'5'));
	p.insert(pair<string,char>("110",'6'));
	p.insert(pair<string,char>("111",'7'));
	for(int i=0;i<n;i++)
	{
		string temp="";
		for(int j=0;j<=b_str[i].size()-3;j+=3)
		{
			cout<<b_str[i]<<endl;
			cout<<b_str[i].substr(j,j+3)<<endl;
			temp+=p[b_str[i].substr(j,j+3)];
		}
		cout<<temp<<endl;
		string temp_1;
		int j=0;
		for(int k=temp.size()-1;k>=0;k--)
		temp_1[j++]=temp[k];
		result.push_back(temp_1);
	 } 
	 //输出 
	 for(int i=0;i<n;i++)	 
	 {
	 	cout<<result[i];
	 	if(i!=(n-1))
	 	cout<<endl;
	  } 
	return 0;  
 } 
