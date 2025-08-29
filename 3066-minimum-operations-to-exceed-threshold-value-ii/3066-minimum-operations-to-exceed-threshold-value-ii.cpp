class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        if(nums.size()<2)return 0;
        priority_queue<long long,vector<long long>,greater<>>heap(nums.begin(),nums.end());
        int ans=0;
        while(heap.top()<k){
            long long a=heap.top();
            heap.pop();
            long long b=heap.top();
            heap.pop();
            heap.push(a*2+b);
            ans++;

        }
        return ans;

    }
};