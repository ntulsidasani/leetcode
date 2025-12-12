class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int>heap;
        vector<int>ans(nums.size(),-1);
        for(int i=0;i<2*nums.size();i++){
            int idx=i%nums.size();
            while(!heap.empty() && nums[heap.top()]<nums[idx]){
                int b=heap.top();
                ans[b]=nums[idx];
                heap.pop();
            }
            heap.push(idx);
    
       } 
       return ans;
    }
};