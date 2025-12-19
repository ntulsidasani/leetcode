class Solution {
public:
    int two(int n){
        const int MOD = 1e9 + 7;
        long long ans=1;
        while(n--){
            ans =(ans*2)%MOD;
        }
        return ans%MOD;
    }
    vector<int> productQueries(int n, vector<vector<int>>& queries) {
        vector<int>powers;
        while(n>0){
            powers.push_back(n%2);
            n/=2;
        }
        vector<int>pows;
        for(int i=powers.size()-1;i>=0;i--){
            if(powers[i]==1){
                pows.push_back(i);
            }
        }
        reverse(pows.begin(),pows.end());

        for(int i=1;i<pows.size();i++){
            pows[i]+=pows[i-1];
        }
        vector<int>ans(queries.size());
        int idx=0;
        for(auto a:queries){
            ans[idx]=(a[0]!=0)?pows[a[1]]-pows[a[0]-1]:pows[a[1]];
            idx++;
        }

        for(auto &a:ans){
            a=two(a);
        }
        return ans;


    
        
    }
};