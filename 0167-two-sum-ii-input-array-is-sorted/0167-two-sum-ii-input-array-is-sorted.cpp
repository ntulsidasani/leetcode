class Solution {
public:
    int bin(vector<int>&nums,int &target,int &start,int &idx){
        int left=start,right=nums.size()-1;
        while(left<=right){
            int mid=(left+right)/2;
            if(nums[mid]+nums[idx]==target)return mid;
            else if(nums[mid]+nums[idx]>target){
                right=mid-1;
            }else{
                left=mid+1;
            }
        }
        return -1;
    }
    vector<int> twoSum(vector<int>& numbers, int target) {
        for(int i=0;i<numbers.size()-1;i++){
            int ans=bin(numbers,target,i+1,i);
            if(ans!=-1)return {i+1,ans+1};
        }
        return {-1,-1};
    }
};