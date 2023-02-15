//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
   
    int dfs(int row,int col,int n,int m, vector<vector<int>>&vis,vector<vector<int>>&v){
        vis[row][col]=1;
          int x=v[row][col];
           int a[]={-1,0,1,0};
           int b[]={0,1,0,-1};
           for(int i=0;i<4;i++){
               int nrow=row+a[i];
               int ncol=col+b[i];
               if(nrow>=0 && nrow<n && ncol>=0 && 
             ncol<m && vis[nrow][ncol]==0 && x<=v[nrow][ncol]){
                   dfs(nrow,ncol,n,m,vis,v);
                   
                   
               }
           }
        
    }
public:
    int water_flow(vector<vector<int>> &v,int n,int m){
    // Write your code here.
    vector<vector<int>>vis(n,vector<int>(m,0));
     vector<vector<int>>vi(n,vector<int>(m,0));
    
        for(int i=0;i<n;i++){
          
                if(vis[i][0]==0){
                    dfs(i,0,n,m,vis,v);
            }
        }
          for(int i=0;i<m;i++){
          
                if(vis[0][i]==0){
                    dfs(0,i,n,m,vis,v);
            }
        }
        
        for(int i=0;i<n;i++){
          
                if(vi[i][m-1]==0){
                    dfs(i,m-1,n,m,vi,v);
            }
        }
          for(int i=0;i<m;i++){
          
                if(vi[n-1][i]==0){
                    dfs(n-1,i,n,m,vi,v);
            }
        }
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[i][j]==1 && vi[i][j]==1)count++;
                
            }
            
       
        }
    return count;
    }
};



//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<int>> mat(n, vector<int>(m));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin>>mat[i][j];
            }
        }
        Solution ob;
        cout << ob.water_flow(mat, n, m) << endl;
        
    }
}


// } Driver Code Ends