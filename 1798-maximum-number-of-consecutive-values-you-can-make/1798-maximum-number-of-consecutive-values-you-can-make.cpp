class Solution {
public:
    int getMaximumConsecutive(vector<int>& coins) {
        sort(coins.begin(),coins.end());
        int n=coins.size();
        int x=0;
        
        for(int i=0;i<n;i++){
            if(coins[i]<=x+1){
                
                x+=coins[i];
            }
        }
        return x+1;
        
    }
};