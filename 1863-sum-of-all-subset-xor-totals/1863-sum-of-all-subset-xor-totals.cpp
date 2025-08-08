class Solution {
public:
    int getxor(vector<int>A){
        int ans=0;
        for(auto a:A){
            ans^=a;
        }
        return ans;
    }
    void permutation(vector<int>nums,vector<int>&ans,vector<int>&subset,int index){
    if(index>=nums.size()){
        ans.push_back(getxor(subset));
        return;
    }
    //ith element excluded
    permutation(nums,ans,subset,index+1);

    //ith element included
    subset.push_back(nums[index]);
    permutation(nums,ans,subset,index+1);
    subset.pop_back();

    }

    int subsetXORSum(vector<int>& nums) {
        vector<int>p;
        vector<int>subset;
        permutation(nums,p,subset,0);
        int sum=0;
        for(auto a:p){
            sum+=a;
        }
        return sum;
        
    }
};