class Solution {
public:
    bool isPowerOfThree(int n) {
        /*int num=1;
	    while (num*3 > 0)
	    {
		    num *= 3;
	    }*/
	    return (n>0)?1162261467%n==0:false;
    }
};
