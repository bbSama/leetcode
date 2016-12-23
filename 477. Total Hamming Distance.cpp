class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int ans = 0, n = nums.size();
        for(int i=0;i<32;i++)
        {
            int bitCount = 0;
            for(int num:nums)
                bitCount += (num>>i)&1;
            ans += bitCount*(n-bitCount);
        }
        return ans;
    }
};
