class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> dict;
        vector<int> res;
        for(int num:nums1) 
            dict[num]++;
        for(int num:nums2)
            if(--dict[num] >= 0) 
                res.push_back(num);
        return res;
    }
};
