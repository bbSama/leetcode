class Solution {
public:
    int hammingWeight(uint32_t n) {
        /*int res = 0;
        while(n)
        {
            res+=(n&1);
            n = n>>1;
        }
        return res;*/
        /*int res = 0;
        for(int i=0;i<32;i++)
        {
            res+=((n&1<<i)>0)?1:0;
        }
        return res;*/
        int res = 0;
        while(n)
        {
            n = n&(n-1);
            res++;
        }
        return res;
    }
};
