//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> shortestPath(vector<vector<int>>& ans ,int n,int m, int src){
       
        vector<int>adj[n];
        for(int i=0;i<m;i++){
            int u=ans[i][0];
            int v=ans[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
     vector<int>dist(n);
        for(int i=0;i<n;i++){
            dist[i]=INT_MAX;
        }
        dist[src]=0;
        queue<int>q;
        q.push(src);
        while(!q.empty()){
            int node =q.front();
            
            q.pop();
            for(auto it:adj[node]){
                if(dist[it]>dist[node]+1){
                    dist[it]=dist[node]+1;
                    q.push(it);
                }
            }
        }
        for(int i=0;i<n;i++){
            if(dist[i]==INT_MAX)dist[i]=-1;
        }
        return dist;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        vector<vector<int>> edges;

        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for(int j=0; j<2; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }

        int src; cin >> src;

        Solution obj;

        vector<int> res = obj.shortestPath(edges, n, m, src);

        for (auto x : res){
            cout<<x<<" ";
        }
        cout << "\n";
    }
}

// } Driver Code Ends