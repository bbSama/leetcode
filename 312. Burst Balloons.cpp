class Solution {
public:
    int maxCoins(vector<int>& nums) {
        int n = nums.size();
        nums.insert(nums.begin(),1);
        nums.push_back(1);
        int dp[n+2][n+2] = {};
        //memset(dp,0,sizeof(int)*(n+2)*(n+2));
        for(int len=2;len<n+2;len++)
            for(int left=0;left<n+2-len;left++)
            {
                int right = left+len;
                for(int i=left+1;i<right;i++)
                    dp[left][right] = max(dp[left][right],dp[left][i]+nums[left]*nums[i]*nums[right]+dp[i][right]);
            }
        return dp[0][n+1];
    }
};
