class Solution {
public:
    int countServers(vector<vector<int>>& v) {
        int m=v.size();
        int n=v[0].size();
        vector<vector<int>>vis(m,vector<int>(n,0));
        int ans=0;
        for(int i=0;i<m;i++){
            int count=0;
           
            for(int j=0;j<n;j++){
               if(v[i][j]==1){
                count++;
                vis[i][j]=-1;
               }
            }
            if(count>1)ans+=count;
            else{
                 for(int j=0;j<n;j++){
               if(v[i][j]==1){
              
                vis[i][j]=0;
               }
            }
            }
        }
         for(int j=0;j<n;j++){
            int count=0;
            int temp=0;
           
            for(int i=0;i<m;i++){
                
               if(v[i][j]==1){
                if(vis[i][j]==0){temp++;}
                count++;
                vis[i][j]=-1;
               }
            }
            if(count>1){
                // cout<<count<<" "<<temp<<endl;
                ans+=temp;
            }
        }
        return ans;
        
    }
};