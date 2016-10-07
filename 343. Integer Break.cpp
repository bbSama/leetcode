class Solution {
public:
    int integerBreak(int n) {
        if(n==2)
            return 1;
        if(n==3)
            return 2;
        if(n==4)
            return 4;
        int res = 1;
        for(int i=1;i<n/3;i++)
            res*=3;
        return (n%3==2)?res*3*2:res*(3+n%3);
    }
};
