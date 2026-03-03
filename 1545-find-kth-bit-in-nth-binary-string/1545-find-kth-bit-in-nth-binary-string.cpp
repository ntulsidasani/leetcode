class Solution {
public:

    string flip(string &s){
        string ans=s;
        for(auto &c:ans){
            c^=1;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
    char findKthBit(int n, int k) {
        vector<string>ans(n);
        ans[0]="0";
        for(int i=1;i<n;i++){
            ans[i]=ans[i-1]+ "1"+ flip(ans[i-1]);
        }
        return ans[n-1][k-1];

    }

};