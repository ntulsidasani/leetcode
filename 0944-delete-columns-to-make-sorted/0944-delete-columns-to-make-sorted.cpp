class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        vector<string>cols(strs[0].size(),"");
        for(int i=0;i<strs[0].size();i++){
            for(int j=0;j<strs.size();j++){
                cols[i].push_back(strs[j][i]);
            }
        }
        int ans=0;
        for(int i=0;i<cols.size();i++){
            string b=cols[i];
            sort(b.begin(),b.end());
            if(!(b==cols[i]))ans++;
        }
        return ans;
    }
};