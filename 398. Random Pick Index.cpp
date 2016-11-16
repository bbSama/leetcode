class Solution {
private:
    vector<int> data;
public:
    Solution(vector<int> nums) {
        data = nums;
    }
    
    int pick(int target) {
        int i;
        while(1)
        {
            i = rand()%data.size();
            if(data[i]==target)
                return i;
        }
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution obj = new Solution(nums);
 * int param_1 = obj.pick(target);
 */
