class Solution {
public:
    int climbStairs(int n) {
        /*int res[n]={};
        res[0] = 1;
        res[1] = 2;
        for(int i=2;i<n;i++)
            res[i] = res[i-2]+res[i-1];
        return res[n-1];*/
        if(n<3)
            return n;
        int t1=1, t2=2, t3;
        for(int i=2;i<n;i++)
        {
            t3 = t1+t2;
            t1 = t2;
            t2 = t3;
        }
        return t3;
    }
};
