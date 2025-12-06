class Solution {
public:
    int minAddToMakeValid(string s) {
        int ans=0;
        for(auto a:s){
            if(a=='(')ans++;

        }
        ans=s.size()-2*ans;
        return abs(ans);
        
    }
};