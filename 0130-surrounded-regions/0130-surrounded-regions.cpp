class Solution {
     void dfs(int row,int col,vector<vector<int>>&vis ,vector<vector<char>>& grid){
         int n=grid.size();
        int m=grid[0].size();
        vis[row][col]=1;
        int a[]={-1,0,1,0};
        int b[]={0,1,0,-1};
        for(int i=0;i<4;i++){
            int nrow=row+a[i];
            int ncol=col+b[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m &&
              vis[nrow][ncol]==0 && grid[nrow][ncol]=='O'){
                dfs(nrow,ncol,vis,grid);
            }
        }
    }
public:
    void solve(vector<vector<char>>& grid) {
         
        int n=grid.size();
        int m=grid[0].size();
            vector<vector<char>>ans(n,vector<char>(m));
        vector<vector<int>>vis(n,vector<int>(m,0));
      
        for(int i=0;i<n;i++){
            if(grid[i][0]=='O' && vis[i][0]==0){
                dfs(i,0,vis,grid);
                
            }
            if(grid[i][m-1]=='O'  && vis[i][m-1]==0){
                dfs(i,m-1,vis,grid);
               
            }
        }
        for(int i=0;i<m;i++){
            if(grid[0][i]=='O' && vis[0][i]==0){
                dfs(0,i,vis,grid);
             
            }
            if(grid[n-1][i]=='O' && vis[n-1][i]==0){
                dfs(n-1,i,vis,grid);
                
            }
        }
         for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[i][j]==0 && grid[i][j]=='O')grid[i][j]='X';
              
            }
        }
       
    
    }
};