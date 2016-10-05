class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> vec(num+1,0);
        for(int i=1;i<=num;i++)
            vec[i] = vec[i&i-1]+1;
        return vec;
    }
};
