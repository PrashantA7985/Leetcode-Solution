class Solution {
    void dfs(int i,  vector<int> &vis,vector<vector<int>>&list){
        vis[i]=1;
        for(auto x:list[i]){
            if(!vis[x]){
                dfs(x,vis,list);
            }
        }
    }
public:
    int findCircleNum(vector<vector<int>>& adj) {
        int n=adj.size();
          vector<vector<int>>list(n);
        for(int i=0;i<adj.size();i++){
          
            for(int j=0;j<adj.size();j++){
               if(adj[i][j]==1 && i!=j){
                   list[i].push_back(j);
                     list[j].push_back(i);
               }
            }
        }
        int ans=0;
        vector<int>vis(n);
        for(int i=0;i<n;i++){
            if(!vis[i]){
                dfs(i,vis,list);
                ans++;
            }
        }
        return ans;
    }
    
};