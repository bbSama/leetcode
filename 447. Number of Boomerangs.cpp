class Solution {
public:
    int dist(pair<int,int> p1,pair<int,int> p2)
    {
        return (p1.first-p2.first)*(p1.first-p2.first)+(p1.second-p2.second)*(p1.second-p2.second);
    }
    int numberOfBoomerangs(vector<pair<int, int>>& points) {
        int res = 0;
        for(int i=0;i<points.size();i++)
        {
            unordered_map<int,int> m;
            for(int j=0;j<points.size();j++)
                m[dist(points[i],points[j])]++;
            for(auto it=m.begin();it!=m.end();it++)
                res += (it->second)*(it->second-1);
        }
        return res;
    }
};
