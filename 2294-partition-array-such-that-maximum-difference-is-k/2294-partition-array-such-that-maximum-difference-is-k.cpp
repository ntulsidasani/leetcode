class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int current=nums[0];
        int n=nums.size();
        int ans=1;
        for(int i=0;i<n;i++){
            if(nums[i]-current<=k)continue;
            else{
                current=nums[i];
                ans++;
            }

        }
        return ans;
        
    }
};