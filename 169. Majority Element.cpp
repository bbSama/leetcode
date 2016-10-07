class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 0;
        int res = nums[0];
        for(int num:nums)
        {
            if(cnt==0)
            {
                cnt++;
                res=num;
            }
            else
                (res==num)?cnt++:cnt--;
        }
        return res;
    }
};
