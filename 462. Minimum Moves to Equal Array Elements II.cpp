class Solution {
public:
    // int partition(vector<int> &nums,int start,int end,int pos)
    // {
    //     int s = start, e = end;
    //     int k = nums[s];
    //     while(s<e)
    //     {
    //         while(s<e&&nums[e]>=k)
    //             e--;
    //         nums[s] = nums[e];
    //         while(s<e&&nums[s]<=k)
    //             s++;
    //         nums[e] = nums[s];
    //     }
    //     nums[s] = k;
    //     if(s==pos)
    //         return nums[s];
    //     if(s<pos)
    //         return partition(nums,s+1,end,pos);
    //     return partition(nums,start,e-1,pos);
    // }  // the average time complexity is O(n) but the worst case is O(n^2), so this method spends long time (400+ms). 
    int minMoves2(vector<int>& nums) {
        // median! not average
        // int median = partition(nums,0,nums.size()-1,nums.size()/2);
        sort(nums.begin(),nums.end());
        int median = nums[nums.size()/2];
        int res = 0;
        for(int i:nums)
            res+=abs(median-i);
        return res;
    }
};
