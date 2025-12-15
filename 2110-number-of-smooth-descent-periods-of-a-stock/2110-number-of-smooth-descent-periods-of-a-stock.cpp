class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        long long ans=0;
        long long temp=1;
        for(int i=1;i<prices.size();i++){
            if(prices[i-1]-prices[i]==1){
                temp++;
            }else{
                ans+=(temp*(temp+1))/2;
                temp=1;
            }
        }
        ans+=(temp*(temp+1))/2;
        return ans;
    }
};