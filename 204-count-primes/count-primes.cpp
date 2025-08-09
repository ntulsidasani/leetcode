class Solution {
public:
    vector<bool>prime(int n){
        if(n<2)return vector<bool>(n+1,false);
        vector<bool>ans(n+1,true);
        ans[0]=ans[1]=false;
        for(int i=2;i*i<=n;i++){
            if(ans[i]){
                for(int j=i*i;j<=n;j+=i){
                    ans[j]=false;
                }
            }
        }
        return ans;
    }
    int countPrimes(int n) {
        int c=0;
        vector<bool>ans=prime(n-1);
        for(auto a:ans){
            if(a) c++;
        }
        return c;
        
    }
};