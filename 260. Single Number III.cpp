class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        /*map<int,int> m;
        for(int i=0;i<nums.size();i++)
            m[nums[i]]++;
        vector<int> vec;
        map<int,int>::iterator it = m.begin();
        for(;it!=m.end();it++)
            if(it->second==1)
                vec.push_back(it->first);
        return vec;*/
        int diff = accumulate(nums.begin(), nums.end(), 0, bit_xor<int>());
        /*int diff = 0;
        for(int num : nums)
            diff^=num;*/
        diff &= -diff;
        vector<int> rets(2, 0);
        for (int num : nums)
            rets[!(num & diff)] ^= num;
        return rets;
    }
};
