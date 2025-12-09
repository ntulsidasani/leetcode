class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int ans=2;
        int answer=2;
        if(nums.size()<=2)return nums.size();
        for(int i=2;i<nums.size();i++){
            if(nums[i]==nums[i-1]+nums[i-2])ans++;
            else ans=2;
            answer=max(ans,answer);
        }
        return answer;
    }
};