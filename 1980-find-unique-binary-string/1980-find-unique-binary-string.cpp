class Solution {
public:
    void solve(set<string> &ans,int n,string curr){
        if(curr.size()==n){
            ans.insert(curr);
            return;
        }
        solve(ans,n,curr+'0');
        solve(ans,n,curr+'1');
    }
    string findDifferentBinaryString(vector<string>& nums) {
        set<string>A;
        solve(A,nums[0].size(),"");
        unordered_map<string,int>freq;
        for(auto &a:nums)freq[a]++;
        for(auto &a:A){
            if(!freq.count(a))return a;
        }
        return "";
    }
};