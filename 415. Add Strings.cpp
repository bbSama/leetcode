class Solution {
public:
    string addStrings(string num1, string num2) {
        if(num1.length()>num2.length())
            return addStrings(num2,num1);
        int carry = 0;
        int len1 = num1.length();
        int len2 = num2.length();
        string res = "";
        int i = 1;
        int tmp;
        for(;i<=len1;i++)
        {
            tmp = num1[len1-i]-'0'+num2[len2-i]-'0'+carry;
            carry = tmp/10;
            res = (char)(tmp%10+'0')+res;
        }
        for(;i<=len2;i++)
        {
            tmp = num2[len2-i]-'0'+carry;
            carry = tmp/10;
            res = (char)(tmp%10+'0')+res;
        }
        if(carry!=0)
        {
            res = (char)(carry+'0')+res;
        }
        return res;
    }
};
