class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // //m[i][j]->m[j][n-i]->m[n-i][n-j]->m[n-j][i]->m[i][j];
        // int n = matrix.size()-1;
        // for(int i=0;i<=n/2-(n+1)%2;i++)
        //     for(int j=0;j<=n/2;j++)
        //     {
        //         int tmp = matrix[n-j][i];
        //         matrix[n-j][i] = matrix[n-i][n-j];
        //         matrix[n-i][n-j] = matrix[j][n-i];
        //         matrix[j][n-i] = matrix[i][j];
        //         matrix[i][j] = tmp;
        //     }
        reverse(matrix.begin(),matrix.end());
        for(int i=0;i<matrix.size();i++)
            for(int j=0;j<i;j++)
                swap(matrix[i][j],matrix[j][i]);
    }
};
