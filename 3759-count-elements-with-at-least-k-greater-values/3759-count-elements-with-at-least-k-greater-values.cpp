class Solution {
public:
    int bin(vector<int> &nums,int target){
        int ans=-1;
        int left=0,right=nums.size()-1;
        while(left<=right){
            int mid=(left+right)/2;
            if(nums[mid]>target){
                ans=mid;
                right=mid-1;
            }else{
                left=mid+1;
            }
        }
        return ans;
    }
    int countElements(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        if(k==0)return nums.size();
        int ans=0;
        for(int i=0;i<nums.size();i++){
            int a=bin(nums,nums[i]);
            if(a!=-1 && nums.size()-a>=k)ans++;
            else break;
        }
        return ans;

        

    }
};