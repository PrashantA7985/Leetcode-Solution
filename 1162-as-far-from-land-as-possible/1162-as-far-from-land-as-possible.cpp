class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        int n=grid.size();
        int vis[n][n];
        int ans[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)ans[i][j]=-1;
        }
        //   for(int i=0;i<n;i++){
        //     for(int j=0;j<n;j++)cout<<ans[i][j]<<" ";
        //       cout<<endl;
        // }
        queue<pair<pair<int,int>,int>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    q.push({{i,j},0});
                    ans[i][j]=0;
                    vis[i][j]=1;
                }
                else vis[i][j]=0;
              
            }
        }
        int a[4]={-1,0,1,0};
        int b[4]={0,1,0,-1};
        // cout<<q.size()<<endl;
        while(!q.empty()){
              int row=q.front().first.first;
             int col=q.front().first.second;
            int data=q.front().second;
            q.pop();
            for(int i=0;i<4;i++){
                int nrow=row+a[i];
                int ncol=col+b[i];
                if(nrow>=0 && nrow<n  && ncol>=0 && ncol<n && vis[nrow][ncol]==0){
                    q.push({{nrow,ncol},data+1});
                    ans[nrow][ncol]=data+1;
                    vis[nrow][ncol]=1;
                }
                }
            
            
        }
        
        int temp=INT_MIN;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                // cout<<ans[i][j]<<" ";
                temp=max(temp,ans[i][j]);
            }
            // cout<<endl;
        }
        if(temp==0)temp=-1;
        return temp;
    }
};