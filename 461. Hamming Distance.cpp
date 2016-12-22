class Solution {
public:
    int hammingDistance(int x, int y) {
        int res = 0;
        // for(int i=0;i<32;i++)
        //     res += (x&1<<i)!=(y&1<<i);
        x = x^y;
        while(x)
        {
            x&=(x-1);
            res++;
        }
        return res;
    }
};
