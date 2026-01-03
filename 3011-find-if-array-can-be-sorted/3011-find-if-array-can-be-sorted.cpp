class Solution {
public:
    int bits(int n){
        int count = __builtin_popcount(n);
        return count;
    }
    bool canSortArray(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
    
            for(int j=1;j<n;j++){
                if(bits(nums[j-1])==bits(nums[j]) && nums[j-1]>nums[j])swap(nums[j-1],nums[j]);
            }
        }
        vector<int>A(nums.begin(),nums.end());
        sort(A.begin(),A.end());
        return nums==A;
    }
};