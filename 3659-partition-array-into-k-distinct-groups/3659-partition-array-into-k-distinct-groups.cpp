class Solution {
public:
    bool partitionArray(vector<int>& nums, int k) {
        if(nums.size()%k!=0)return false;
        unordered_map<int,int>freq;
        for(int i=0;i<nums.size();i++)freq[nums[i]]++;
        for(auto a:freq){
            if(a.second>nums.size()/k)return false;
        }
        return true;
    }
};