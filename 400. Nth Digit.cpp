class Solution {
public:
    int findNthDigit(int n) {
        int i,dict[9]={0,9,189,2889,38889,488889,5888889,68888889,788888889};
        for(i=0;i<9;i++)
            if(n<=dict[i])
                break;
        int tmp = n-dict[i-1]-1;
        int k = tmp/i+pow(10,i-1);
        int d = tmp%i;
        k = k/pow(10,i-d-1);
        return k%10;
    }
};
