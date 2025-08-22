class Solution {
public:
    int topandbottom(vector<vector<int>>&grid){
        int top=INT_MAX;
        int bottom=INT_MIN;
        int left=INT_MAX;
        int right=INT_MIN;

        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                    top=min(i,top);
                    bottom=max(i,bottom);
                    left=min(j,left);
                    right=max(j,right);
                }
            }
        }

        return (bottom-top+1)*(right-left+1);
        
    }
    int minimumArea(vector<vector<int>>& grid) {
        return topandbottom(grid);
       
    }
};