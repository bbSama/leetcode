class Solution {
public:
    string multString(string s,int t)
    {
        string res = "";
        for(int i=0;i<t;i++)
            res+=s;
        return res;
    }
    string decodeString(string s) {
        int l=0,r=0;
        int start,times=0;
        string res="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='[')
            {
                if(l==r)
                    start = i+1;
                l++;
            }
            else if(s[i]==']')
            {
                r++;
                if(l==r)
                {
                    res+=multString(decodeString(s.substr(start,i-start)),times);
                    times = 0;
                }
            }
            else if((l==r)&&isalpha(s[i]))
                res+=s[i];
            else if(l==r)
                times = times*10 + s[i]-'0';
        }
        return res;
    }
};
