class Solution {
public:
    bool wordPattern(string pattern, string str) {
        int p[26]={};
        unordered_map<string,int> s;
        istringstream in(str);
        int i=0;
        for(string word;in>>word;++i)
        {
            if(i==pattern.size()||p[pattern[i]-'a']!=s[word])
                return false;
            p[pattern[i]-'a']=i+1;
            s[word]=i+1;
        }
        return i==pattern.size();
    }
};
