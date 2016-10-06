class Solution {
public: //can not use division
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res(nums.size(),1);
        for(int i=0,j=nums.size()-1, tmp1=1, tmp2=1;i<nums.size();++i,--j) {
            res[i]*=tmp1, tmp1*=nums[i];
            res[j]*=tmp2, tmp2*=nums[j];
        }
        return res;
    }
};
