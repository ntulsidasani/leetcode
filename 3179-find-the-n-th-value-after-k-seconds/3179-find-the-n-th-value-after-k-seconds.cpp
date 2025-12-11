class Solution {
public:

    int valueAfterKSeconds(int n, int k) {
        vector<int >prefsum(n,1);
        const long long MOD=1000000007;
        for(int i=0;i<k;i++){
            for(int j=1;j<n;j++){
                prefsum[j]=(prefsum[j-1]+prefsum[j])%MOD;
            }
        }
        int ans=prefsum[n-1]%MOD;
        return ans;
    }
};