//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    bool dfs(int node,int parent,vector<int> adj[],int vis[]){
        vis[node]=1;
        for(auto x: adj[node]){
            if(!vis[x]){
               if(dfs(x,node,adj,vis)==true)return true;
            }
            else if(vis[x]==1 && x!=parent )return true;
        }
        return false;
        
    }
 bool bfs(int node,vector<int> adj[],int vis[]){
          queue<pair<int,int>>q;
          q.push({node,-1});
          vis[node]=1;
          while(!q.empty()){
              int node=q.front().first;
              int parent=q.front().second;
              q.pop();
              for(auto x:adj[node]){
                  if(!vis[x]){
                      q.push({x,node});
                      vis[x]=1;
                  }
                  else if(x!=parent)return true;
              }
             
          }
           return false;
 }
  public:
    // Function to detect cycle in an undirected graph.
    bool isCycle(int n, vector<int> adj[]) {
         int  vis[n]={0};
         for(int i=0;i<n;i++){
              if(vis[i]==0){
                 if( bfs(i,adj,vis))return true;
              }
         }
         return false;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends