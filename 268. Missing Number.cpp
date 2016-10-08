class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // int sum = 0;
        // for(int num:nums)
        //     sum+=num;
        // return nums.size()*(nums.size()+1)/2-sum;
        int res = nums.size();
        for(int i=0;i<nums.size();i++)
        {
            res^=i;
            res^=nums[i];
        }
        return res;
    }
};
