class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        unordered_map<int,priority_queue<int>>map;
        unordered_map<int, priority_queue<int, vector<int>, greater<int>>>map2;
        int n=grid.size(),m=grid[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i-j>=0)map[i-j].push(grid[i][j]);
                else map2[i-j].push(grid[i][j]);
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i-j>=0){
                    grid[i][j]=map[i-j].top();
                    map[i-j].pop();
                }else{
                    grid[i][j]=map2[i-j].top();
                    map2[i-j].pop();
                }
            }
        }
        return grid;
    }
};