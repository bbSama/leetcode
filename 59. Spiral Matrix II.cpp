class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res(n,vector<int>(n));
        int row=0,col=-1,val=0;
        while(n>=1)
        {
            for(int i=0;i<n;i++)
                res[row][++col] = ++val;
            for(int i=1;i<n;i++)
                res[++row][col] = ++val;
            for(int i=1;i<n;i++)
                res[row][--col] = ++val;
            for(int i=1;i<n-1;i++)
                res[--row][col] = ++val;
            n-=2;
        }
        return res;
    }
};
