/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
class Solution {
public:
    int cmp(pair<int,int> a,pair<int,int> b)
    {
        return a.first<b.first;
    }
    vector<int> findRightInterval(vector<Interval>& intervals) {
        vector<pair<int,int>> tmp(intervals.size());
        for(int i=0;i<tmp.size();i++)
            tmp[i] = make_pair(intervals[i].start,i);
        auto cmp = [](const pair<int,int>& a,const pair<int,int>& b){return a.first<b.first;};
        sort(tmp.begin(),tmp.end(),cmp);
        vector<int> res(tmp.size());
        for(int i=0;i<tmp.size();i++)
        {
            auto it = lower_bound(tmp.begin(),tmp.end(),make_pair(intervals[tmp[i].second].end,tmp[i].second),cmp);
            if(it==tmp.end())
                res[tmp[i].second] = -1;
            else
                res[tmp[i].second] = it->second;
        }
        return res;
    }
};
