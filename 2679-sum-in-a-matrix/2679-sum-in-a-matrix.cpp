class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int score=0;
        for(auto &a:nums){
            sort(a.begin(),a.end(),greater<>());
        }
       
        for(int i=0;i<nums[0].size();i++){
            int temp=-1;
            for(int j=0;j<nums.size();j++){
                temp=max(nums[j][i],temp);
            }
            score+=temp;
        }
        return score;
    }
};