class Solution {
public:
    int numSub(string s) {
        long long ans=0;
        long long temp=0;
        const int MOD = 1e9 + 7;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1')temp++;
            else{
                ans=ans%MOD +(temp*(temp+1))/2%MOD;
                temp=0;
            }
        }
        ans=ans%MOD +((temp*(temp+1))/2)%MOD;
        return ans;
    }
};