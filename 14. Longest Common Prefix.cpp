class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size(),i=0;
        if(n==0)    return "";
        sort(strs.begin(),strs.begin()+n);
        for(;i<strs[0].size() && i<strs[n-1].size() && strs[0][i]==strs[n-1][i];i++);
        return strs[0].substr(0,i);
    }
};
