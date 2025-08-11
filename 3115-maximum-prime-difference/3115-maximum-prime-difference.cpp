class Solution {
public:
    vector<bool>prime(int n){
        vector<bool>ans(n+1,true);
        ans[0]=ans[1]=false;
        for(int i=2;i*i<=n;i++){
            if(ans[i]){
                for(int j=i*i;j<=n;j+=i){
                    ans[j]=false;
                }
            }
        }
        return ans;
    }
    int maximumPrimeDifference(vector<int>& nums) {
        vector<bool>p=prime(100);
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(p[nums[i]])ans.push_back(i);

        }
        
        return abs(ans[0]-ans[ans.size()-1]);
    }
};