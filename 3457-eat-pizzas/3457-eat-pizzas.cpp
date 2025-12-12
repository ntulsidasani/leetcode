class Solution {
public:
    long long maxWeight(vector<int>& pizzas) {
        priority_queue<int>heap(pizzas.begin(),pizzas.end());
        long long ans=0;
        int n=pizzas.size();
        int odd=(n+7)/8;
        int even=n/8;
        for(int i=0;i<odd;i++){
            ans+=heap.top();
            heap.pop();
        }
        for(int i=0;i<even;i++){
            heap.pop();
            ans+=heap.top();
            heap.pop();
        }
        return ans;
    }
};