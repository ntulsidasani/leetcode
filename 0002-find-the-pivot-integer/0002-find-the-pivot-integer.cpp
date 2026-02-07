class Solution {
public:
    int pivotInteger(int n) {
        int sum=(n*(n+1)/2);
        for(int i=1;i<=n;i++){
            int x=i*(i-1)/2;
            int y=i*(i+1)/2;
            if(sum-x==y)return i;
        }
        return -1;
    }
};