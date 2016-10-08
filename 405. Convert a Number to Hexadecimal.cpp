class Solution {
public:
    string toHex(unsigned int num) {  // !Attention: if not use unsigned int, -1>>4 is still -1;
        char digit[17] = "0123456789abcdef";
        string res="";
        if(num==0)
            return "0";
        else
        {
            while(num)
            {
                res=digit[num&15]+res;
                num=(num>>4);
            }
            return res;
        }
    }
};
