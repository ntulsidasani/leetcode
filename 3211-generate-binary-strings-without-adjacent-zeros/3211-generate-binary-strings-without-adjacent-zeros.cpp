class Solution {
public:
    void solve(vector<string>&A ,int n,string s){
        if(s.size()==n){
            A.push_back(s);
            return;
        }

        solve(A,n,s+'1');
        
        if(s.empty()|| s[s.size()-1]=='1'){
            solve(A,n,s+'0');
        }
        
    }

    vector<string> validStrings(int n) {
        vector<string>ans;
        solve(ans,n,"");
        return ans;
    }
};