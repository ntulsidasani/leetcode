class Solution {
public:
    long long coloredCells(int n) {
        long long ans=1LL+2LL*(n-1)*n;
        return ans;
    }
};