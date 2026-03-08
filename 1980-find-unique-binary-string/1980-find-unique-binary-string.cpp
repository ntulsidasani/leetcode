class Solution {
public:
    string solve(unordered_map<string,int> &ans,int n,string curr){
        if(curr.size()==n){
            if(!ans.count(curr))return curr;
            return "";
        }
        string left=solve(ans,n,curr+'0');
        if(!left.empty())return left;
        
        string right=solve(ans,n,curr+'1');
        return right;
    }
    string findDifferentBinaryString(vector<string>& nums) {
        
        unordered_map<string,int>freq;
        for(auto &a:nums)freq[a]++;
        string ans=solve(freq,nums[0].size(),"");
        return ans;
    }
};