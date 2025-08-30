class Solution {
public:
    bool canJump(vector<int>& nums) {
        vector<int>dp(nums.size());
        int farthest=0;
        for(int i=0;i<nums.size();i++){
            if(i>farthest)return false;
            farthest=max(farthest,nums[i]+i);
            if(farthest>=nums.size()-1)return true;
            
        }
        return false;
    }
};