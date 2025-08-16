class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        unordered_map<int,int>freq;
        for(int i=0;i<=24;i++){
            for(auto a:candidates){
                if((a>>i)&1)freq[i]++;
            }
        }
        int m=INT_MIN;
        for(auto a:freq){
            m=max(a.second,m);
        }
        return m;
    }
};