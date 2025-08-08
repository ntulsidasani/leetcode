class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int c=0;
        for(auto a:nums){
            c+=min(a%3,3-a%3);
        }
        return c;
        
    }
};