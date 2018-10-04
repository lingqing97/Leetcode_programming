class Solution {
public:
    string intToRoman(int num) {
        string result="";
        int bit=0;
        if((bit=num/1000)!=0)
        {
            result+="M";
            for(int i=0;i<(bit-1);i++)
                result+="M";
        }
        num=num%1000;
        bit=num/100;
        if(bit!=0)
        {
            switch(bit)
            {
                case 1:result+="C";break;
                case 2:result+="CC";break;
                case 3:result+="CCC";break;
                case 4:result+="CD";break;
                case 5:result+="D";break;
                case 6:result+="DC";break;
                case 7:result+="DCC";break;
                case 8:result+="DCCC";break;
                case 9:result+="CM";break;
                default:break;
            }
        }
        num=num%100;
        if((bit=num/10)!=0)
        {
            switch(bit)
            {
                case 1:result+="X";break;
                case 2:result+="XX";break;
                case 3:result+="XXX";break;
                case 4:result+="XL";break;
                case 5:result+="L";break;
                case 6:result+="LX";break;
                case 7:result+="LXX";break;
                case 8:result+="LXXX";break;
                case 9:result+="XC";break;
                default:break;
            }
        }
        num=num%10;
        switch(num)
        {
            case 1:result+="I";break;
            case 2:result+="II";break;
            case 3:result+="III";break;
            case 4:result+="IV";break;
            case 5:result+="V";break;
            case 6:result+="VI";break;
            case 7:result+="VII";break;
            case 8:result+="VIII";break;
            case 9:result+="IX";break;
            default:break;
        }
        return result;
    }
};
