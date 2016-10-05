class Solution {
public:
    char findTheDifference(string s, string t) {
        char res = s[0];
        for(int i=1;i<s.length();i++)
            res^=s[i];
        for(int i=0;i<t.length();i++)
            res^=t[i];
        return res;
    }
};
