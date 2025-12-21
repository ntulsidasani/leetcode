class Solution {
public:
    int halveArray(vector<int>& nums) {
        double sum=0;
        priority_queue<double>heap;
        for(auto a:nums){
            heap.push(a);
            sum+=a;
        }
        double half=sum/2.00000;
        int ans=0;
        while(sum>half){
            double a=heap.top();heap.pop();
            heap.push(a/2.000000);
            ans++;
            sum-=a/2.000000;
        }
        return ans;
    }
};