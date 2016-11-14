class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if(matrix.size()==0)
            return {};
        vector<int> res;
        int row=0,col=-1;
        int m = matrix.size(),n = matrix[0].size();
        while(m>=1&&n>=1)
        {
            for(int i=0;i<n;i++)
                res.push_back(matrix[row][++col]);
            for(int i=1;i<m;i++)
                res.push_back(matrix[++row][col]);
            for(int i=1;i<n&&m>1;i++)
                res.push_back(matrix[row][--col]);
            for(int i=1;i<m-1&&n>1;i++)
                res.push_back(matrix[--row][col]);
            m-=2;
            n-=2;
        }
        return res;
    }
};
