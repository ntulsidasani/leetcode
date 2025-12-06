class Solution {
public:
    int minLengthAfterRemovals(string s) {
        int ans=0;
        for(auto a:s){
            if (a=='a')ans++;

        }
        ans=s.size()-2*ans;
        return -ans;
    } 
};