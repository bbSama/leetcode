class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> res = digits;
        // res[res.size()-1]++;
        // for(int i=res.size()-1;i>0;--i)
        //     if(res[i]>9)
        //     {
        //         res[i]-=10;
        //         res[i-1]++;
        //     }
        // if(res[0]>9)
        // {
        //     res[0] -= 10;
        //     res.insert(res.begin(),1);
        // }
        // return res;
        int n = res.size();
    	for (int i = n - 1; i >= 0; --i)
    	{
    		if (res[i] == 9)
    		{
    			res[i] = 0;
    		}
    		else
    		{
    			res[i]++;
    			return res;
    		}
    	}
		res[0] =1;
		res.push_back(0);
		return res; 
    }
};
