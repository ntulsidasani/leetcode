class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<bool>visited(nums.size()+1,false);
        visited[0]=true;
        
        for(auto &a:nums){
            if(!visited[a])visited[a]=true;
        }
        vector<int>ans;
        for(int i=0;i<visited.size();i++){
            if(!visited[i])ans.push_back(i);
        }
        return ans;
    }
};