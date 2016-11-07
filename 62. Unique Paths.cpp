class Solution {
public:
    int uniquePaths(int m, int n) {
        long long res = 1;
        int i = m+n-2, j = n-1;
        while(i>m-1&&j>1)
        {
            if(res%j)
            {
                res*=i;
                i--;
            }
            else
            {
                res/=j;
                j--;
            }
        }
        for(;i>m-1;--i)
            res *= i;
        for(;j>1;--j)
            res /= j;
        return res;
    }
};
