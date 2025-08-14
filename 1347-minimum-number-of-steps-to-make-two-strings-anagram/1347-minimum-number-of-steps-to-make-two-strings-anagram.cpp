class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int>freq;
        for(auto a:s)freq[a]++;
        for(auto a:t)freq[a]--;
        int ans=0;
        for(auto a:freq){
            if(a.second>0)ans+=a.second;
        }
        return ans;
    }
};