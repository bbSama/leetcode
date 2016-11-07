class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        /*int i;
        for(i=0;i<nums.size();i++)
            if(nums[i]>=target)
                return i;
        return i;*/
        int start = 0, end = nums.size();
        while(start<end)
        {
            int mid = (start+end)>>1;
            if(target==nums[mid])
                return mid;
            if(target>nums[mid])
                start = mid+1;
            else
                end = mid;
        }
        return start;
    }
};
