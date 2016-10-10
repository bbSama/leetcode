class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for(int i=0;i<nums.size();i++)
            sum+=nums[i];
        if(sum%2)
            return false;
        sum/=2;
        int dp[5000];
        memset(dp,0,sizeof(int)*5000);
        for(int j=0;j<nums.size();j++)
            dp[nums[j]] = 1;
        for(int i=nums[0];i<=sum;i++)
        {
            for(int j=1;j<nums.size();j++)
            {
                dp[i] |= dp[i-nums[j]];
            }
        }
        return dp[sum];
    }
};
