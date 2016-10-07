class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
            return false;
        int res[26];
        memset(res,0,sizeof(int)*26);
        for(int i=0;i<s.length();i++)
        {
            res[s[i]-'a']++;
            res[t[i]-'a']--;
        }
        for(int i:res)
            if(i!=0)
                return false;
        return true;
    }
};
