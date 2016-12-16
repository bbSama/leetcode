class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.empty())
            return 0;
        int n = nums.size();
        int a=0, b=0, c1=0, c2=0;
        for(int i=2;i<n-1;i++)
        {
            c1 = max(b,a+nums[i]);
            a = b;
            b = c1;
        }
        c1 += nums[0];
        a = b = 0;
        for(int i=1;i<n;i++)
        {
            c2 = max(b,a+nums[i]);
            a = b;
            b = c2;
        }
        return max(c1,c2);
    }
};
