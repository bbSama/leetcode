class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> m;
        for(char ch:s)
            m[ch]++;
        vector<pair<char,int>> t;
        for(auto p:m)
            t.push_back(p);
        sort(t.begin(),t.end(),[](pair<char,int> a,pair<char,int> b){return a.second>b.second;});
        string ret = "";
        for(auto p:t)
            for(int i=0;i<p.second;i++)
                ret += p.first;
        return ret;
    }
};
