class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 0;
        int res;
        for(int num:nums)
        {
            if(cnt==0)
            {
                cnt++;
                res=num;
            }
            else if(num==res)
                cnt++;
            else
                cnt--;
        }
        return res;
    }
};
