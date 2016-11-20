class Solution {
public:
    vector<int> getRow(int rowIndex) {
        // if(rowIndex==0)
        //     return {1};
        // vector<int> res = getRow(rowIndex-1);
        // for(int i=0;i<res.size()-1;i++)
        //     res[i] += res[i+1];
        // res.insert(res.begin(),1);
        // return res;
        vector<int> res(rowIndex+1, 0);
        res[0] = 1;
        for(int i=1; i<rowIndex+1; i++)
            for(int j=i; j>=1; j--)
                res[j] += res[j-1];
        return res;
    }
};
