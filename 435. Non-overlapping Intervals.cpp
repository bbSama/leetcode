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
    int eraseOverlapIntervals(vector<Interval>& intervals) {
        sort(intervals.begin(),intervals.end(),
            [](Interval a,Interval b){return a.end<b.end;});
        int len = 0;
        int cur_end = INT_MIN;
        for(Interval i:intervals)
            if(i.start>=cur_end)
            {
                len++;
                cur_end = i.end;
            }
        return intervals.size()-len;
    }
};
