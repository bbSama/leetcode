class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for(int i=0;i<nums.size();i++)
            sum+=nums[i];
        if(sum%2)
            return false;
        sum/=2;
        bool *dp = new bool[sum+1];
        memset(dp,0,sizeof(bool)*(sum+1));
        dp[0] = 1;
        for(int i=1;i<=sum;i++)
        {
            for(int j=1;j<nums.size();j++)
            {
                dp[i] |= dp[i-nums[j]];
                if(dp[i])
                    break;
            }
        }
        return dp[sum];
    }
};
