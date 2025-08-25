class Solution {
public:
    vector<vector<bool>>vis;

    vector<int>dx={0,0,-1,1};
    vector<int>dy={-1,1,0,0};

    int orangesRotting(vector<vector<int>>& grid) {
        vis.assign(grid.size(),vector<bool>(grid[0].size(),false));
        queue<pair<int,int>>q;
        int fresh=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==2)q.push({i,j});
                else if(grid[i][j]==1) fresh++;
            }
        }
        
        if(fresh==0)return 0;
        int ans=-1;
        while(!q.empty()){
            int s=q.size();
            ans++;
            while(s--){
                auto [x,y]=q.front();
                q.pop();
            

            for(int i=0;i<4;i++){
                int nx=x+dx[i];
                int ny=y+dy[i];
            
            if(nx>=0 && nx<grid.size() && ny>=0 && ny<grid[0].size() && !vis[nx][ny] && grid[nx][ny]==1){
                grid[nx][ny]=2;
                q.push({nx,ny});
                vis[nx][ny]=true;
                fresh--;
                }
            }



        }
        }return (fresh==0) ?ans:-1;
       
    }
};