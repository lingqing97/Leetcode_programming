#include <iostream>
#include <map>
using namespace std;
int main(int argc,char** argv)
{
	map<char,string> m;
	m.insert(pair<char,string>('1',"1111"));
	cout<<m['1'];
	return 0;
}
