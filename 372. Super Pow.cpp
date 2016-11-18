/*
(1) Firstly, if a has both divisor 7 and 191, that's a % 1337 == 0, answer is 0.
(2) Then if a has neither divisor 7 nor 191, that's a and 1337 are coprime, so ab % 1337 = ab % phi(1337) % 1337 = ab % 1140 % 1337.
(3) Finally, a could has either divisor 7 or 191, that's similar.
Let it be 7 for example.
Let a = 7nx
and let b = 1140p + q, where 0 < q <= 1140
then:
ab % 1337
= ((7nx)b) % 1337
= (7nbxb) % 1337
= ( (7nb % 1337) * (xb % 1337) ) % 1337
= ( (71140np + nq % 1337) * (x1140p + q % 1337) ) % 1337
now note x and 1337 are coprime, so
= ( (71140np + nq % 1337) * (xq % 1337) ) % 1337
= ( 7 * (71140np + nq - 1 % 191) * (xq % 1337) ) % 1337
note 7 and 191 are coprime too, and 1140 is a multiple of 190, where 190 = phi(191). What's more we should assure that q != 0, if b % 1140== 0, then let b = 1140. so
= ( 7 * (7nq - 1 % 191) * (xq % 1337) ) % 1337
= ( (7nq % 1337) * (xq % 1337) ) % 1337
= (7nqxq) % 1337
= ((7nx)q) % 1337
= (aq) % 1337
now you see condition (2) and (3) can be merged as one solution, if you take care of when b % 1440 == 0, and let b += 1140. Actually (1) can be merged too, but not efficient.
*/
class Solution {
public:
    int myPow(int a,int n)
    {
        a%=1337;
        int res = 1;
        for(int i=0;i<n;++i)
            res = (res*a)%1337;
        return res;
    }
    int superPow(int a, vector<int>& b) {
        /*
        if (b.empty()) return 1;
        int last_digit = b.back();
        b.pop_back();
        return myPow(superPow(a, b), 10) * myPow(a, last_digit) % 1337;
        */
        int p = 0;
        for (int i : b) p = (p * 10 + i) % 1140;
        if (p == 0) p += 1140;
        return myPow(a, p);
    }
};
