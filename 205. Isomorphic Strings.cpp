class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size())
            return false;
        // int map[256]={},flag[256]={};
        // for(int i=0;i<s.size();i++)
        // {
        //     if(map[s[i]]==0)
        //     {
        //         if(flag[t[i]]==1)
        //             return false;
        //         map[s[i]] = t[i];
        //         flag[t[i]] = 1;
        //     }
        //     else if(map[s[i]]!=t[i])
        //         return false;
        // }
        // return true;
        int m1[256] = {0}, m2[256] = {0}, n = s.size();
        for (int i = 0; i < n; ++i) {
            if (m1[s[i]] != m2[t[i]]) return false;
            m1[s[i]] = i + 1;
            m2[t[i]] = i + 1;
        }
        return true;
    }
};
