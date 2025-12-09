class Solution {
public:
    long long maxSum(vector<vector<int>>& grid, vector<int>& limits, int k) {
        for(auto &a:grid){
            sort(a.begin(),a.end(),greater<int>());
        }
        vector<int>ans;
        for(int i=0;i<limits.size();i++){
            for(int j=0;j<limits[i];j++ )ans.push_back(grid[i][j]);
        }
        sort(ans.begin(),ans.end(),greater<int>());
        long long answer=0;
        for(int i=0;i<k;i++)answer+=ans[i];
        return answer;
    }
};