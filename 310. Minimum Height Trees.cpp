class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<pair<int, int>>& edges) {
        if (n == 1)
            return { 0 };
        vector<int> adj[n];
        for (auto p : edges) {
            adj[p.first].push_back(p.second);
            adj[p.second].push_back(p.first);
        }

        vector<int> cur;
        for (int i = 0; i < n; i++)
            if (adj[i].size() == 1)
                cur.push_back(i);

        while (n > 2) {
            vector<int> next;
            for (int &v : cur) {
                int w = adj[v][0];
                for(auto it=adj[w].begin();it!=adj[w].end();it++)
                    if(*it==v)
                    {
                        adj[w].erase(it);
                        break;
                    }
                if (adj[w].size() == 1)
                    next.push_back(w);
            }
            n -= cur.size();
            cur = next;
        }
        return cur;
    }
};
