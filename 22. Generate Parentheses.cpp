class Solution {
public:
    void dfs(int l,int r,string s,vector<string> &res)
    {
        if(l==0&&r==0)
            res.push_back(s);
        if(l>0)
            dfs(l-1,r,s+'(',res);
        if(l<r&&r>0)
            dfs(l,r-1,s+')',res);
    }
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        dfs(n,n,"",res);
        return res;
    }
};
