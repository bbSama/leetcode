class Solution {
public:
    // stupid integer overflow
    int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
        long w = (long)min(C,G)-(long)max(A,E), h = (long)min(D,H) - (long)max(B,F);
        long s1 = (C-A)*(D-B),s2 = (G-E)*(H-F),s = w<0||h<0?0:w*h;
        return s1-s+s2;
    }
};
