class Solution {
public:
    vector<vector<bool>>vis;
    vector<int>x={0,0,-1,1},y={-1,1,0,0};

    void bfs(int row,int col,vector<vector<char>> &grid){
        
        queue<pair<int,int>>q;
        q.push({row,col});
        vis[row][col]=true;
        while(!q.empty()){
            auto a=q.front();
            int r=a.first;
            int c=a.second;
            q.pop();
            for(int i=0;i<4;i++){
                int nr=r+x[i];
                int nc=c+y[i];
                if(nr>=0 && nr<grid.size() && nc>=0 && nc<=grid[0].size() && !vis[nr][nc] && grid[nr][nc]=='1' ){
                    q.push({nr,nc});
                    vis[nr][nc]=true;
                }
            }
        }

        
    }
    int numIslands(vector<vector<char>>& grid) {
        int ans=0;
        vis.assign(grid.size(),vector<bool>(grid[0].size(),false));
        
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(vis[i][j]==false && grid[i][j]=='1'){
                    ans++;
                    bfs(i,j,grid);
                }
            }
        }
        return ans;
    }
};