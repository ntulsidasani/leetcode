class Solution {
public:
    long long  lcm(long long  n,long long  m){
        long long  x=gcd(n,m);
        return (n*m)/x;
    }
    vector<int> replaceNonCoprimes(vector<int >& nums) {
        stack<long long >heap;
        for(long long  i=0;i<nums.size();i++){
            long long  x=nums[i];
            while(!heap.empty() && gcd(heap.top(),x)>1){
                long long  a=heap.top();
                heap.pop();
                x=lcm(x,a);
            }
            heap.push(x);
        }
        vector<int>ans;
        while(!heap.empty()){
            ans.push_back(heap.top());
            heap.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;

        
    }
};