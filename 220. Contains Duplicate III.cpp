class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        if(k<=0)
            return false;
        if(k>=nums.size())
            k = nums.size()-1;
        set<int> s;
        for (int i = 0; i < nums.size(); i++) 
        {
            if (i > k) 
                s.erase(nums[i-k-1]);
            auto pos = s.lower_bound(nums[i] - t);
            if (pos != s.end() && *pos - nums[i] <= t)
                return true;
            s.insert(nums[i]);
        }
        return false;
    }
};
