class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& A) {
//         if(A.size()<3)
//             return 0;
//         int len = 2, res = 0, i = 1;
//         for(i=1;i<A.size()-1;i++)
//         {
//             if(A[i+1]-A[i]!=A[i]-A[i-1])
//             {
//                 if(len>=3)
//                     res += (len-2)*(len-1)/2;
//                 len = 2;
//             }
//             else
//                 len++;
//         }
//         if(len>=3)
//             res += (len-2)*(len-1)/2;
//         return res;
        int curr = 0, res = 0;
        for(int i=2;i<A.size();i++)
        {
            if(A[i]-A[i-1]==A[i-1]-A[i-2])
            {
                curr++;
                res += curr;
            }
            else
                curr = 0;
        }
        return res;
    }
};
