class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> us(nums1.begin(),nums1.end());
        vector<int> res;
        for(int num:nums2)
        {
            if(us.count(num))
            {
                res.push_back(num);
                us.erase(num);
            }
        }
        return res;
    }
};
