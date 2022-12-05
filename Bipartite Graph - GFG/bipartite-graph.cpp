//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    private:
    bool bfs(int start,int n,int color[], vector<int>adj[]){
        queue<int>q;
        q.push(start);
        color[start]=0;
       
        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(auto it:adj[node]){
               
             if(color[it]==color[node])return false;
              else  if(color[it]==-1){
                    color[it]=!color[node];
                    q.push(it);
                }
            }
        }
        return true;
    }
    // bool dfs(int node, int col, int color[], vector<int> adj[]) {
    //     color[node] = col; 
        
    //     // traverse adjacent nodes
    //     for(auto it : adj[node]) {
    //         // if uncoloured
    //         if(color[it] == -1) {
    //             if(dfs(it, !col, color, adj) == false) return false; 
    //         }
    //         // if previously coloured and have the same colour
    //         else if(color[it] == col) {
    //             return false; 
    //         }
    //     }
        
    //     return true; 
    // }
public:
	bool isBipartite(int V, vector<int>adj[]){
	      int color[V];
	    for(int i = 0;i<V;i++) color[i] = -1; 
	    
	    // for connected components
	    for(int i = 0;i<V;i++) {
	        if(color[i] == -1) {
	            if(bfs(i, 0, color, adj) == false) 
	                return false; 
	        }
	    }
	    return true; 
	}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}
// } Driver Code Ends