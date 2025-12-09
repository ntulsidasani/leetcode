class Solution {
public:
    int maximumPossibleSize(vector<int>& nums) {
        int ans=0;
        int temp=nums[0];
        for(int i=0;i<nums.size();i++ ){
            if(nums[i]>=temp){
                ans++;
                temp=nums[i];
            }
        }
        return ans;
    }
};