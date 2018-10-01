#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
#include <deque>
using namespace std;
bool is_space(char c)
{
	return c == ' ';
}
bool is_valid(char c)
{
	string valid_str = "0123456789+-";
	if (valid_str.find(c) != string::npos)
		return true;
	else
		return false;
}
bool is_number(char c)
{
	string numbers = "0123456789";
	if (numbers.find(c) != string::npos)
		return true;
	else
		return false;
}
int myAtoi(string str) {
	int rev = 0;
	int symbol = false;    //����Ϊfalse,����Ϊtrue;
	int npo = false;       //�ж��Ƿ��ҵ���һ���ǿ��ַ�
	int pos = 0;
	for (int i = 0; i < str.size(); i++)
	{
		if (npo)
		{
			if (is_number(str[i]))
			{
				pos = str[i] - '0';
				if (!symbol)
				{
					if ((rev > INT_MAX / 10) || (rev == INT_MAX / 10 && pos > 7))
					{
						rev = INT_MAX;
						break;
					}
				}
				else
				{
					if ((rev > INT_MAX / 10) || (rev == INT_MAX / 10 || pos > 8))
					{
						rev = INT_MAX + 1;
						break;
					}
				}
				rev = rev * 10 + pos;
			}
			else
			{
				continue;
			}
		}
		else
		{
			if (is_space(str[i]))        //�����һ���ǿո�������
				continue;
			else if (is_valid(str[i]))       //�������Ч�ģ����ȡ
			{
				npo = true;
				if (str[i] == '+')
					symbol = false;
				else if (str[i] == '-')
					symbol = true;
				else
				{
					pos = str[i] - '0';
					rev = pos;
				}
			}
			else    //�����һ���Ƿ����ֺͷ��ţ��򷵻�0
			{
				break;
			}
		}
	}
	return rev;
}
int main()
{
	string in ="4193 with words";
	cout<<myAtoi(in);
	return 0;
}