class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        vector<int>prefsum(nums.size());
        int sum=0;
        unordered_map<int,int>idx;
        idx[0]=-1;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            int a=(nums[i]==0)?-1:+1; 
            sum+=a;  
            if(idx.count(sum)){
                ans=max(i-idx[sum],ans);
            } else{
                idx[sum]=i;
            }
        }
        return ans;
       
        


        

    }
};