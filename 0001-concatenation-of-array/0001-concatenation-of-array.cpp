class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>A=nums;
        for(int i=0;i<nums.size();i++){
            int x=nums[i];
            A.push_back(x);
        }
        return A;
    }
};