class Solution {
private:
    map<char,int> dict;
public:
    Solution()
    {
        dict['I']=1;dict['X']=10;dict['C']=100;dict['M']=1000;
        dict['V']=5;dict['L']=50;dict['D']=500;
    }
    int romanToInt(string s) {
        /*int dict[256]={0};
        dict['I']=1;dict['X']=10;dict['C']=100;dict['M']=1000;
        dict['V']=5;dict['L']=50;dict['D']=500;*/
        int res = dict[s[s.length()-1]];
        for(int i=0;i<s.length()-1;i++)
        {
            (dict[s[i]]>=dict[s[i+1]])?res+=dict[s[i]]:res-=dict[s[i]];
        }
        return res;
    }
};
