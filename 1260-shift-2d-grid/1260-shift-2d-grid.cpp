class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        vector<int>oneD;
        for(auto a:grid){
            for(auto b:a)oneD.push_back(b);    
        }
        vector<int>flat(oneD.size());
        for(int i=0;i<oneD.size();i++){
            flat[(i+k)%oneD.size()]=oneD[i];
        }

        int num=0;
        vector<vector<int>>ans(grid.size(),vector<int>(grid[0].size()));
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                ans[i][j]=flat[num];
                num++;
            }
        }
        return ans;
        
    }
};