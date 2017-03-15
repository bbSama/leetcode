class Solution {
public:
    string reverseStr(string s, int k) {
        int i=k;
        for(;i<s.length();i+=2*k)
            for(int m=i-k,n=i-1;m<n;m++,n--)
                swap(s[m],s[n]);
        for(int m=i-k,n=s.length()-1;m<n;m++,n--)
            swap(s[m],s[n]);
        return s;
    }
};
