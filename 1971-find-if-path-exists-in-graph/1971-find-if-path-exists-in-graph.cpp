class Solution {
    private:
    bool dfs(int x,int y,int vis[], vector<vector<int>>& adj){
        if(vis[x]==1)return false;
            vis[x]=1;
            if(x==y)return true;
              for(auto it:adj[x]){
                if(dfs(it,y,vis,adj)==true)return true;
              }
        return false;
    }
public:
    bool validPath(int n, vector<vector<int>>& v, int source, int destination) {
        vector<vector<int>>adj(n);
        for(int i=0;i<v.size();i++){
           adj[v[i][0]].push_back(v[i][1]);
            adj[v[i][1]].push_back(v[i][0]);
        }
      
        
        int vis[n];
        for(int i=0;i<n;i++)vis[i]=0;
        if(dfs(source,destination,vis,adj)==true)return true;
        return false;
    }
};