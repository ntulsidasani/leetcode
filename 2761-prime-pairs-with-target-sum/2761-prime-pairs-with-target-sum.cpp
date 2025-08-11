class Solution {
public:
    vector<int>seive(int n){
        vector<bool>ans(n+1,true);
        ans[0]=ans[1]=false;
        for(int i=2;i*i<=n;i++){
            if(ans[i]){
                for(int j=i*i;j<=n;j+=i){
                    ans[j]=false;
                }
            }
        }
        vector<int>p;
        for(int i=2;i<ans.size();i++){
            if(ans[i])p.push_back(i);
        }
        return p;
    }
    vector<vector<int>> findPrimePairs(int n) {
        vector<int>prime=seive(n);
        vector<vector<int>>ans;
        int left=0,right=(int)prime.size()-1;
        while(left<=right){
            int x=prime[left]+prime[right];
            if(x==n){
                ans.push_back({prime[left],prime[right]});
                left++;
                right--;
            }else if(x<n){
                left++;
            }else{
                right--;
            }
        }
        return ans;
    }
};