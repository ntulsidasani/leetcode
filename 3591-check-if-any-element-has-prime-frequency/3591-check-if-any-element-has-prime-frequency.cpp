class Solution {
public:
    vector<bool>seive(int n){
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
    bool checkPrimeFrequency(vector<int>& nums) {
        vector<bool>prime=seive(100);
        unordered_map<int,int>freq;
        for(auto a:nums)freq[a]++;
        for(auto a:freq){
            if(prime[a.second])return true;
        }
        return false;
    }
};