class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int left=0,right=nums.size()-1;
        sort(nums.begin(),nums.end());
        int ans=0;
        while(left<right){
            int sum=nums[left]+nums[right];
            if(sum==k){
                left++;
                right--;
                ans++;
            }
            else if(sum>k)right--;
            else left++;
        }
        return ans;
    }
};