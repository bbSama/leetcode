class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==0)
            return 0;
        int profit[prices.size()-1]={};
        for(int i=0;i<prices.size()-1;i++)
            profit[i] = prices[i+1] - prices[i];
        int tmp = 0, max = 0;
        for(int i:profit)
        {
            tmp = tmp+i;
            if(tmp<0)
                tmp = 0;
            else if(tmp>max)
                max = tmp;
        }
        return max;
    }
};
