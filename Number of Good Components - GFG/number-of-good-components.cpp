//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
    vector<int> dfs(int node, int n,vector<vector<int>>& adj,int vis[],vector<int> &v){
        vis[node]=1;
        v.push_back(node);
        for(auto it:adj[node]){
            if(vis[it]==0){
                dfs(it,n,adj,vis,v);
            }
        }
        return v;
      
    }
  public:
    int findNumberOfGoodComponent(int n, vector<vector<int>>& adj) {
        // code here
        vector<vector<int>>ans;
       
       
       
        int vis[n+1]={0};
        for(int i=0;i<=n;i++){
             vector<int>v;
            if(vis[i]==0){
           v= dfs(i,n,adj,vis,v);
              ans.push_back(v);  
            }
        }
        int count=0;
      for(int i=0;i<ans.size();i++){
          if(ans[i].size()==1 && ans[i][0]==0)continue;
          else if(ans[i].size()==1)
          {
              count++;
            //   cout<<"YY"<<" ";
          }
          else{
                int flag=0;
              for(int j=0;j<ans[i].size();j++){
                  int x=ans[i][j];
                    if(adj[x].size()!=(ans[i].size()-1)){
                        flag=1;
                        break;
                    }
              }
            //   cout<<" XX"<<" ";
              if(flag==0)count++;
              
          }
      }
    //   cout<<endl;
    // for(int i=0;i<ans.size();i++){
    //     for(int j=0;j<ans[i].size();j++)cout<<ans[i][j]<<" ";
    //     cout<<endl;
    // }
       
        return count;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int E, V;
        cin >> E >> V;
        vector<vector<int>> adj(V + 1, vector<int>());
        for (int i = 0; i < E; i++) {
            int u, v;

            cin >> u >> v;

            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;

        int res = obj.findNumberOfGoodComponent(V, adj);
        cout << res << "\n";
    }
    return 0;
}
// } Driver Code Ends