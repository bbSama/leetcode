// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        int small=1,big=n;
        while(small<=big)
        {
            int mid = small+((big-small)>>1);
            int ret = guess(mid);
            if(ret==0)
                return mid;
            else if(ret==-1)
                big = mid-1;
            else
                small = mid+1;
        }
        return small;
    }
};
