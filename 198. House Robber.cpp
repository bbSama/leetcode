class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.empty())
            return 0;
        // int res[nums.size()+1];
        // res[0] = 0;
        // res[1] = nums[0];
        // for(int i=2;i<=nums.size();i++)
        //     res[i] = max(res[i-1],res[i-2]+nums[i-1]);
        // return res[nums.size()];
        int a = 0,b = nums[0],c = nums[0];
        for(int i=1;i<nums.size();i++)
        {
            c = max(b,a+nums[i]);
            a = b;
            b = c;
        }
        return c;
    }
};
