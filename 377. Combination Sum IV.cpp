class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        int res[target+1] = {0};
        res[0] = 1;
        for(int i=1;i<target+1;i++)
        {
            for(int num:nums)
                if(i>=num)
                    res[i] += res[i-num];
        }
        return res[target];
    }
};
