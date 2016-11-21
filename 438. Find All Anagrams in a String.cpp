class Solution {
public:
    bool same(int *curr, int *goal)
    {
        for(int i=0;i<26;i++)
            if(curr[i]!=goal[i])
                return false;
        return true;
    }
    vector<int> findAnagrams(string s, string p) {
        vector<int> res;
        if(s.length()<p.length())
            return res;
        int goal[26]={},curr[26]={};
        for(char ch:p)
            goal[ch-'a']++;
        for(int i=0;i<p.size();++i)
            curr[s[i]-'a']++;
        if(same(curr,goal))
            res.push_back(0);
        for(int i=1;i+p.size()-1<s.size();++i)
        {
            curr[s[i-1]-'a']--;
            curr[s[i+p.size()-1]-'a']++;
            if(same(curr,goal))
                res.push_back(i);
        }
        return res;
    }
};
