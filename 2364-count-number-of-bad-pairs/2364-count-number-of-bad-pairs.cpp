class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]-i]++;
        }
        long long ans=(nums.size()*(nums.size()-1))/2;
        for(auto a:freq){
            long long b=a.second;
            ans-=(b*(b-1))/2;
        }
        return ans;
    }
};