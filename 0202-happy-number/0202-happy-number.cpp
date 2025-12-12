class Solution {
public:
    int next(int n){
        int ans=0;
        while(n>0){
            int a=n%10;
            ans+=a*a;
            n=n/10;
        }
        return ans;
    }
    bool isHappy(int n) {
        int slow=n,fast=next(n);
        while(fast!=1 && fast!=slow){
            slow=next(slow);
            fast=next(next(fast));

        }
        return fast==1;
    }
};