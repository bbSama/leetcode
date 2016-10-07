class Solution {
public:
    int f(int n)
    {
        if(n==0)
            return 1;
        int res = 9;
        for(int i=1;i<n;i++)
            res *= 10-i;
        return res;
    }
    int countNumbersWithUniqueDigits(int n) {
        if(n>10)
            return countNumbersWithUniqueDigits(10);
        int res=0;
        for(int i=0;i<=n;i++)
        {
            res += f(i);
        }
        return res;
    }
};
