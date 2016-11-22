class Solution {
public:
    string countAndSay(int n) {
//         string res[n];
//         res[0] = "1";
//         for(int i=1;i<n;i++)
//         {
//             char curr = res[i-1][0];
//             int cnt=0;
//             for(char ch:res[i-1])
//             {
//                 if(ch==curr)
//                     cnt++;
//                 else
//                 {
//                     res[i]+=to_string(cnt)+curr;
//                     curr = ch;
//                     cnt = 1;
//                 }
//             }
//             res[i]+=to_string(cnt)+curr;
//         }
//         return res[n-1];
        if(n==1)
            return "1";
        string last = countAndSay(n-1);
        string res;
        char curr = last[0];
        int cnt=0;
        for(char ch:last)
        {
            if(ch==curr)
                cnt++;
            else
            {
                res+=to_string(cnt)+curr;
                curr = ch;
                cnt = 1;
            }
        }
        res+=to_string(cnt)+curr;
        return res;
    }
};
