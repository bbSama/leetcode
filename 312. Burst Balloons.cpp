class Solution {
public:
    int maxCoins(vector<int>& nums) {
        int n = nums.size();
        nums.insert(nums.begin(),1);
        nums.push_back(1);
        int dp[n+2][n+2] = {};
        //memset(dp,0,sizeof(int)*(n+2)*(n+2));
        for(int len=2;len<n+2;len++)
            for(int start=0;start<n+2-len;start++)
            {
                int end = start+len;
                for(int i=start+1;i<end;i++)
                    dp[start][end] = max(dp[start][end],dp[start][i]+nums[start]*nums[i]*nums[end]+dp[i][end]);
            }
        return dp[0][n+1];
    }
};
