class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n=nums.size();
        if(n==1)return 0;
        sort(nums.begin(),nums.end());
        int ans=INT_MAX;
        for(int i=0;i<=nums.size()-k;i++){
            int x=nums[i+k-1]-nums[i];
            ans=min(x,ans);

        }
        return ans;
    }
};