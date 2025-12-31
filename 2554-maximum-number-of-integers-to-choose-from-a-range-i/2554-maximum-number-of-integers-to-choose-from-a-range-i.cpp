class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        vector<bool>allowed(n+1,true);
        for(auto a:banned){
            if(a<=n)allowed[a]=false;
        }
        
        int temp=0;
        int ans=0;
        for(int i=1;i<=n;i++){
            if(allowed[i] && temp+i<=maxSum ){
                temp+=i;
                ans++;
            }
            else if (temp+i>maxSum)break;
        }
        return ans;

    }
};