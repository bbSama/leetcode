class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        // O(n*log(big-small)) solution
        int n = matrix[0].size();
        int small=matrix[0][0],big=matrix[n-1][n-1];
        int mid,cnt,j;
        while(small<big)
        {
            mid = (big+small)>>1;
            cnt=0;
            j=n-1;
            for(int i=0;i<n;i++) // Attention: the complexity is 2*n not n**2
            {
                while(j>=0&&matrix[i][j]>mid) --j;
                cnt+=j+1;
            }
            if(cnt<k)
                small = mid+1;
            else
                big = mid;
        }
        return big;
    }
};
