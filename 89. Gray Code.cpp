class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> gray[n+1];
        gray[0] = {0};
        for(int i=1;i<=n;i++)
        {
            gray[i] = gray[i-1];
            for(int j=gray[i-1].size()-1;j>=0;--j)
                gray[i].push_back(gray[i-1][j]+(1<<i-1));
        }
        return gray[n];
    }
};
