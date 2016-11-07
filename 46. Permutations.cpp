/*class Solution {
public:
    vector<vector<int>> permute(vector<int> &num) {
        vector<int> solution;
        vector<vector<int>> ret;
        vector<bool> used(num.size(), false);
        std::function<void()> generator = [&] () {
            if (solution.size() == num.size()) {
              ret.push_back(solution);
              return;
            }
    
            for (int i = 0; i < num.size(); ++i) {
              if (used[i]) continue;
              solution.push_back(num[i]);
              used[i] = true;
              generator();
              used[i] = false;
              solution.pop_back();
            }
        };
    
        generator();
        return ret;
  }
};*/
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums,int len) {
        if(len==1)
            return {{nums[0]}};
        vector<vector<int>> tmp = permute(nums,len-1);
        vector<vector<int>> res;
        for(vector<int> v:tmp)
            for(int i=0;i<len;i++)
            {
                vector<int> t = v;
                t.insert(t.begin()+i,nums[len-1]);
                res.push_back(t);
            }
        return res;
    }
    vector<vector<int>> permute(vector<int>& nums) {
        return permute(nums,nums.size());
    }
};
