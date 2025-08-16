class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        for(auto a:nums)freq[a]++;
        int ans=0;
        if(k==0){
            for(auto a:freq){
                if(a.second>1)ans++;
            }
        }else{
            for(auto a:freq){
                if(freq.count(a.first+k))ans++;
            }
        }
        return ans;
    }
};