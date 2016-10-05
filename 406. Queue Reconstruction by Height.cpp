class Solution {
public:
    static bool cmp(pair<int,int>& x,pair<int,int>& y)
    {
        return x.first == y.first ? x.second<y.second : x.first>y.first;
    }
    vector<pair<int, int>> reconstructQueue(vector<pair<int, int>>& people) {
        vector<pair<int,int>>::iterator it;
        sort(people.begin(),people.end(),cmp);
        vector<pair<int,int>> ans;
        for(it=people.begin();it!=people.end();it++)
        {
            ans.insert(ans.begin()+it->second,*it);
        }
        return ans;
    }
};
