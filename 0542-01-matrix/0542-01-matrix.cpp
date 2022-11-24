class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
	     int m=grid[0].size();
	    int vis[n][m];
	    vector<vector<int>>ans(n,vector<int>(m,0));
	    queue<pair<pair<int,int>,int>>q;
	    for(int i=0;i<n;i++){
	        for(int j=0;j<m;j++){
	            if(grid[i][j]==0){
	                vis[i][j]=1;
	                q.push({{i,j},0});
	               
	            }
	            else vis[i][j]=0;
	        }
	    }
	     int a[]={-1,0,1,0};
	     int b[]={0,1,0,-1};
	    while(!q.empty()){
	        int r=q.front().first.first;
	        int c=q.front().first.second;
	        int t=q.front().second;
	        ans[r][c]=t;
	        q.pop();
	        for(int i=0;i<4;i++){
	            int nrow=r+a[i];
	            int ncol=c+b[i];
	            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && 
	            vis[nrow][ncol]==0 && grid[nrow][ncol]==1){
	                q.push({{nrow,ncol},t+1});
	                vis[nrow][ncol]=1;
	            }
	        }
	        
	    }
	    return ans;
    }
};