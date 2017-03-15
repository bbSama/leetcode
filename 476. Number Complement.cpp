/*
class Solution {
public:
    int findComplement(int num) {
        int base = 1, ret = 0;
        while(num)
        {
            ret += (num%2)?0:base;
            num >>= 1;
            base <<= 1;
        }
        return ret;
    }
};
*/
class Solution {
public:
    int findComplement(int num) {
        unsigned mask = ~0;
        while (num & mask) mask <<= 1;
        return ~mask & ~num;
    }
};
