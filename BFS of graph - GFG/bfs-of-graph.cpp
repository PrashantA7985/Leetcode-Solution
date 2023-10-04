//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    void solve(int i,int n,vector<int> adj[],vector<int>&vis,vector<int>&ans){
        vis[i]=1;
        queue<int>q;
        q.push(i);
           while(!q.empty()){
               int temp=q.front();
               ans.push_back(temp);
               q.pop();
               for(auto it:adj[temp]){
                     if(vis[it]==0){
                         q.push(it);
                         vis[it]=1;
                     }
               }
           }
    }
    vector<int> bfsOfGraph(int n, vector<int> adj[]) {
        // Code here
        vector<int>vis(n);
        vector<int>ans;
        
                solve(0,n,adj,vis,ans);
            
        
        return ans;
        
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends