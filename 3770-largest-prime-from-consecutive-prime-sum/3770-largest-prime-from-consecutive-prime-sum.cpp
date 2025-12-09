class Solution {
public:
    vector<int>seive(int n){
        vector<bool>prime(n+1,true);
        prime[0]=false;
        prime[1]=false;
        for(long long i=2;i<=n;i++){
            if(prime[i]){
                for(long long j=i*i;j<=n;j+=i){
                    prime[j]=false;
                }
            }
        }
        vector<int>ans;
        for(int i=0;i<=n;i++){
            if(prime[i]){
                ans.push_back(i);
            }
        }
        vector<int>final(ans.size());
        final[0]=ans[0];
        for(int i=1;i<ans.size();i++){
            if(final[i-1]>n)break;
            else final[i]=final[i-1]+ans[i];
        }
        vector<int>answer;
        for(int i=0;i<ans.size();i++){
            if(final[i]<=n && prime[final[i]])answer.push_back(final[i]);
        }
        return answer;
    }
    int largestPrime(int n) {
        if(n<2)return 0;
        vector<int>prime=seive(n);
        if(prime.empty())return 0;
        return prime[prime.size()-1];
    }
};