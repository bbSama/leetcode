class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,int> m;
        m['(']=1;m[')']=-1;
        m['[']=2;m[']']=-2;
        m['{']=3;m['}']=-3;
        stack<int> stk;
        for(char ch:s)
        {
            if(m[ch]>0)
                stk.push(m[ch]);
            else
            {
                if(stk.empty())
                    return false;
                if(stk.top()+m[ch]!=0)
                    return false;
                stk.pop();
            }
        }
        return stk.empty();
    }
};
