class Solution {
public:
    string lexSmallest(string s) {
        string ans=s;
        for(int i=0;i<s.size();i++){
            string a=s;
            reverse(a.begin(),a.begin()+i);
            ans=min(a,ans);
        }
        for(int i=0;i<s.size();i++){
            string a=s;
            reverse(a.begin()+i,a.end());
            ans=min(a,ans);
        }
        return ans;
    }
};