class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        int start = 0, end = n;
        while(start<end)
        {
            int mid = (start+end)>>1;
            if(citations[mid]>=n-mid)
                end = mid;
            else if(citations[mid]<n-mid)
                start = mid+1;
        }
        return n-start;
    }
};
