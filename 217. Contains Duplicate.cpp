class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> tmp(nums.begin(),nums.end());
        return tmp.size()<nums.size();
    }
};
