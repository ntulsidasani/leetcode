class Solution {
public:
    int evsum(vector<int>nums){
        int ans=0;
        for(auto a:nums){
            if(a%2==0)ans+=a;
        }
        return ans;
    }
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int even=evsum(nums);
        vector<int>ans;
        for(auto a:queries){
            int x=nums[a[1]];
            nums[a[1]]+=a[0];
            
            if(x%2==0)even-=x;
            if(nums[a[1]]%2==0)even+=nums[a[1]];
            ans.push_back(even);
            
        }
        return ans;

    }
};