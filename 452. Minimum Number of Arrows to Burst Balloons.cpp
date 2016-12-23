class Solution {
public:
    int findMinArrowShots(vector<pair<int, int>>& points) {
        if(points.empty())
            return 0;
        sort(points.begin(),points.end(),
            [](pair<int,int> a,pair<int,int> b){
                return a.second==b.second?a.first<b.first:a.second<b.second;
            });
        int ret = 1,curr = points[0].second;
        for(int i=1;i<points.size();i++)
            if(points[i].first>curr)
            {
                curr = points[i].second;
                ret++;
            }
        return ret;
    }
};
