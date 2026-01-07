class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(auto a:nums)freq[a]++;
        for(auto a:freq){
            if(a.second>=nums.size()/2)return a.first;
        }
        return -1;
    }
};