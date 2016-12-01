class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        if(k<=0)
            return false;
        if(k>=nums.size())
            k = nums.size()-1;
        unordered_set<int> s(nums.begin(),nums.begin()+k+1);
        for(int i=k+1;i<nums.size();++i)
        {
            if(s.size()!=k+1)
                return true;
            s.erase(nums[i-k-1]);
            s.insert(nums[i]);
        }
        return s.size()!=k+1;
    }
};
