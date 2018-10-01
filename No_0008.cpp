class Solution {
public:
    int myAtoi(string str) {
        int rev=0;
        int symbol=false;    //正数为false,负数为true;
        int first_symbol=false;
        int npo=false;       //判断是否找到第一个非空字符
        int pos=0;
        for(int i=0;i<str.size();i++)
        {
            if(npo)
            {
                if(is_number(str[i]))
                {
                    pos=str[i]-'0';
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
                        if ((rev > INT_MAX / 10) || (rev == INT_MAX / 10 && pos > 8))
                        {
                            rev = INT_MAX+1 ;
                            break;
                        }
                    }
                        rev=rev*10+pos;
                    }
                else if(str[i]=='.'||str[i]=='+'||str[i]=='-')
                    break;
                else
                {
                    break;
                }
            }
            else
            {
                if(is_space(str[i]))        //如果第一个是空格，则跳过
                    continue;
                else if(is_valid(str[i]))       //如果是有效的，则读取
                {
                    npo=true;
                    if(str[i]=='+')
                    {
                        symbol=false;
                        first_symbol=true;
                    }
                    else if(str[i]=='-')
                    {
                        symbol=true;
                        first_symbol=true;
                    }
                    else
                    {
                        pos=str[i]-'0';
                        rev=pos;
                    }
                }
                else    //如果第一个是非数字和符号，则返回0
                {
                    break;
                }
            }
        }
        return (symbol==false)?rev:-rev;
    }
private:
    bool is_space(char c)
    {
        return c==' ';
    }
    bool is_valid(char c)
    {
        string valid_str="0123456789+-";
        if(valid_str.find(c)!=string::npos)
            return true;
        else
            return false;
    }
    bool is_number(char c)
    {
        string numbers="0123456789";
        if(numbers.find(c)!=string::npos)
            return true;
        else
            return false;
    }
};
