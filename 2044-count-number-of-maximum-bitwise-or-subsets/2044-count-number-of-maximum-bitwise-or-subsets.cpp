class Solution {
public:
    void perm(vector<int>nums,vector<int>&B,vector<vector<int>>&ans,int index){
        if(index>=nums.size()){
            ans.push_back(B);
            return ;
        }
        perm(nums,B,ans,index+1);

        B.push_back(nums[index]);
        perm(nums,B,ans,index+1);
        B.pop_back();
    }
    int OR(vector<int>&A){
        int ans=0;
        for(auto &a:A){
            ans|=a;
        }
        return ans;
    }
    int countMaxOrSubsets(vector<int>& nums) {
        int maxor=OR(nums);
        int ans=0;
        vector<int>B;
        vector<vector<int>>permutations;
        perm(nums,B,permutations,0);
        for(auto a:permutations){
            if(OR(a)==maxor)ans++;
        }
        return ans;
        
    }
};