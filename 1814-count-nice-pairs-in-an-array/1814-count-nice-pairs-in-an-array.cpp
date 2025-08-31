class Solution {
public:
    int rev(int x){
        string str=to_string(x);
        reverse(str.begin(),str.end());
        return stoi(str);
    }
    int countNicePairs(vector<int>& nums) {
        unordered_map<int,long long>diff;
        const int MOD = 1e9 + 7;
        for(auto a:nums){
            diff[a-rev(a)]++;
        }
        long long ans = 0;
        for (auto &[a, d] : diff) {
            ans = (ans + (d * (d - 1) / 2) % MOD) % MOD;
        }
        return (int)ans;

        
    }
};