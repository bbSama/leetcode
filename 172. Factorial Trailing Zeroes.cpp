class Solution {
public:
    int trailingZeroes(int n) {
        int num_5=0;
        long val = 5;
        while(val<=n)
        {
            num_5 += n/val;
            val*=5;
        }
        return num_5;
    }
};
