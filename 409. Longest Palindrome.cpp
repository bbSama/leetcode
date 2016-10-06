class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int> m;
        for(char ch:s)
            m[ch]++;
        int all_even = 0;
        map<char,int>::iterator it;
        int res = 0;
        for(it=m.begin();it!=m.end();it++)
        {
            if(it->second %2 !=0)
                all_even = 1;
            res += it->second/2;
        }
        res *= 2;
        res += all_even;
        return res;
    }
};
