#include <iostream>
   string add(string str1,string str2)
   {
       int num1;
       int num2;
       string result="";
       bool carry_bit=false;
       int i;
       for(i=0;i<(int size=(str1.size()>str2.size()?str2.size():str1.size());i++)
           {
               num1=atoi(str1[i]);
               num2=atoi(str2[i]);
               if(!carry_bit)
               result+=to_string((num1+num2)%10);
               else
               result+=to_string((num1+num2+1)%10);
               if((num1+num2)/10!=0)
               carry_bit=true;
               else
               carry_bit=false;
           }
        if(str1.size()==str2.size())
        	if(carry_bit)
        	result+="1";
        if(str1.size()!=str2.size())
        	{
        		if(i==str1.size())
        		{
        			if(carry_bit)
        			{
        				while(i<str2.size())
        				{
	        				num2=atoi(str2[i])
	        				result+=to_string((num2+1)%10);
	        				if((num2+10)/10!=0)
	        				carry_bit=true;
	        				else
	        				carry_bit=false;
							i++;	
						} 
					}
				}
				else
				{
					
				}
			}
   }
int pow(int a,int b)
{
    int result=1;
    for(int i=1;i<=b;i++)
    result*=a;
    return result;
}
int main()
{
	string str1="123";
	string str2="345";
}
