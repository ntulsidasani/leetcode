class Solution {
public:
    vector<vector<bool>>vis;

    vector<int>dx={0,0,1,-1};
    vector<int>dy={1,-1,0,0};


    int bfs(int row,int col,vector<vector<int>>grid){
        
        int ar=0;
        
        queue<pair<int,int>>q;
        q.push({row,col});
        vis[row][col]=true;
        while(!q.empty()){
            auto a=q.front();
            q.pop();
            ar++;
            for(int i=0;i<4;i++){
                int nx=a.first +dx[i];
                int ny=a.second+dy[i];
                if(nx>=0 && nx<grid.size() &&ny>=0 && ny<grid[0].size() && !vis[nx][ny] && grid[nx][ny]==1){
                    vis[nx][ny]=true;
                    q.push({nx,ny});
                    
                }
            } 
        }
        return ar;
        
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ans=0;
        vis.assign(grid.size(),vector<bool>(grid[0].size(),false));
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(!vis[i][j] && grid[i][j]==1){
                    
                    int ar=bfs(i,j,grid);
                    ans=max(ar,ans);
                }
            }
        }
        return ans;
        
    }
};