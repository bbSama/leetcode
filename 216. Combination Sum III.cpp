class Solution {
public:
    void dfs(int k, int n,int max,vector<int> inst,vector<vector<int>> &res)
    {
        if(k==0)
        {
            if(n==0)
                res.push_back(inst);
            return;
        }
        for(int i=max+1;i<=9;i++)
        {
            inst[inst.size()-k] = i;
            dfs(k-1,n-i,i,inst,res);
        }
    }
    
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> res;
        vector<int> inst(k,0);
        dfs(k,n,0,inst,res);
        return res;
    }
};
