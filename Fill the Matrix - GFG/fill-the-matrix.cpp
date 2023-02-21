//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int minIteration(int n, int m, int x, int y){    
       
       int vis[n][m]={0};
       for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            vis[i][j]=0;
        }
   
    }
        queue<pair<pair<int,int>,int>>q;
        vis[x-1][y-1]=0;
        q.push({{x-1,y-1},0});
        int a[]={-1,0,1,0};
        int b[]={0,1,0,-1};
        while(!q.empty()){
            int row=q.front().first.first;
            int col=q.front().first.second;
            int steps=q.front().second;
            q.pop();
            for(int i=0;i<4;i++){
                int nrow=a[i]+row;
                int ncol=b[i]+col;
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && vis[nrow][ncol]==0){
                    q.push({{nrow,ncol},steps+1});
                    vis[nrow][ncol]=steps+1;
                }
            }
        }
    
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           
            ans=max(ans,vis[i][j]);
        }
     
    }
    return ans;
    }
    
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, M, x, y;
        cin >> N >> M;
        cin >> x >> y;
        
        Solution ob;
        cout << ob.minIteration(N, M, x, y) << endl;
    }
    return 0; 
} 
// } Driver Code Ends