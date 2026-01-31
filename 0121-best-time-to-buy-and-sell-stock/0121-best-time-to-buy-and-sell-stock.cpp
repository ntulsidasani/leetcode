class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=-1;
        int temp=INT_MAX;
        for(auto a:prices){
            temp=min(temp,a);
            ans=max(a-temp,ans);
        }
        return ans;
    }
};