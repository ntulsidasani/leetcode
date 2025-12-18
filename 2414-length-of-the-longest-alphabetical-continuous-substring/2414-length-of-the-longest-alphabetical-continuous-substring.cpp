class Solution {
public:
    int longestContinuousSubstring(string s) {
        if(s.size()<=1)return s.size();
        int ans=1;
        int temp=1;
        char prev=s[0];
        for(int i=1;i<s.size();i++){
            if(s[i]-prev==1){
                temp++;
                ans=max(ans,temp);
                
            }else temp=1;
            prev=s[i];
        }
        
        return ans;
    }
};