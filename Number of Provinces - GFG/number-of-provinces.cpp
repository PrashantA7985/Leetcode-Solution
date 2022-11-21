//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
    void bfs(int i,int vis[],vector<vector<int>> &list){
        vis[i]=1;
        queue<int>q;
        q.push(i);
        while(!q.empty()){
            int temp=q.front();
            q.pop();
            for(auto x:list[temp]){
                if(!vis[x]){
                    vis[x]=1;
                    q.push(x);
                }
            }
        }
    }
  public:
    int numProvinces(vector<vector<int>> adj, int n) {
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
        int vis[n]={0};
        for(int i=0;i<n;i++){
            if(!vis[i]){
                bfs(i,vis,list);
                ans++;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    }
    return 0;
}
// } Driver Code Ends