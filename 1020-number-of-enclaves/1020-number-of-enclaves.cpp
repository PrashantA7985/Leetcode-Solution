class Solution {
    private:
    void dfs(int row,int col,vector<vector<int>>&vis ,vector<vector<int>>& grid){
         int n=grid.size();
        int m=grid[0].size();
        vis[row][col]=1;
        int a[]={-1,0,1,0};
        int b[]={0,1,0,-1};
        for(int i=0;i<4;i++){
            int nrow=row+a[i];
            int ncol=col+b[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m &&
              vis[nrow][ncol]==0 && grid[nrow][ncol]==1){
                dfs(nrow,ncol,vis,grid);
            }
        }
    }
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        int count=0;
        for(int i=0;i<n;i++){
            if(grid[i][0]==1 && vis[i][0]==0){
                dfs(i,0,vis,grid);
                
            }
            if(grid[i][m-1]  && vis[i][m-1]==0){
                dfs(i,m-1,vis,grid);
               
            }
        }
        for(int i=0;i<m;i++){
            if(grid[0][i]==1 && vis[0][i]==0){
                dfs(0,i,vis,grid);
             
            }
            if(grid[n-1][i] && vis[n-1][i]==0){
                dfs(n-1,i,vis,grid);
                
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[i][j]==0 && grid[i][j]==1)count++;
            }
        }
        return count;
    }
};