//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> eventualSafeNodes(int n, vector<int> adj[]) {
        // code here
       vector<int> revadj[n];
        int indegree[n]={0};
        for(int i=0;i<n;i++){
            for(auto it:adj[i]){
                revadj[it].push_back(i);
            }
        }
        for(int i=0;i<n;i++){
            for(auto it:revadj[i]){
                indegree[it]++;
            }
        }
        queue<int>q;
        vector<int>v;
        for(int i=0;i<n;i++){
            if(!indegree[i])q.push(i);
        }
        while(!q.empty()){
            int node =q.front();
            q.pop();
            v.push_back(node);
            for(auto it:revadj[node]){
                indegree[it]--;
                if(indegree[it]==0)q.push(it);
            }
        }
         sort(v.begin(),v.end());
         return v;
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {

        int V, E;
        cin >> V >> E;
        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        vector<int> safeNodes = obj.eventualSafeNodes(V, adj);
        for (auto i : safeNodes) {
            cout << i << " ";
        }
        cout << endl;
    }
}

// } Driver Code Ends