class Solution {
public:
    int minMoves(vector<int>& nums) {
        int min_num = *min_element(nums.begin(),nums.end());
        int res = 0;
        for(int i:nums)
            res += (i-min_num);
        return res;
    }
};
