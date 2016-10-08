class Solution {
public:
    bool isHappy(int n) {
    //     unordered_set<int> us;
    //     us.insert(n);
    //     int tmp;
    //     while(1)
    //     {
    //         tmp = 0;
    //         while(n)
    //         {
    //             tmp += (n%10)*(n%10);
    //             n/=10;
    //         }
    //         if(tmp==1)
    //             return true;
    //         if (us.count(tmp))
			 //   return false;
    //         us.insert(tmp);
    //         n = tmp;
    //     }
    while(n>6){
        int next = 0;
        while(n){next+=(n%10)*(n%10); n/=10;}
        n = next;
    }
    return n==1;
    }
};
