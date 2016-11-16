class Solution {
public:
    double myPow(double x, int n) {
        if(n<0) 
            return 1/x/myPow(x,-(n+1));
        double res = 1;
        while(n>0)  
        {
            if(n&1) res*=x;
            x*=x;
            n=n>>1;
        }
        return res;
    }
};
