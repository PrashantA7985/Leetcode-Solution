//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int nCr(int n, int r){
        vector<vector<int>>v(1000);
        
        // code here
        if(n<r)return 0;
        
        int m=1e9+7;
        int res=1;
        for(int i=0;i<=n;i++){
            v[i].resize(i+1);
            v[i][0]=1;
            v[i][i]=1;
            
           for(int j=1;j<i;j++){
               v[i][j]=(v[i-1][j-1]+v[i-1][j])%m;
           }
        }
        
        return v[n][r];
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, r;
        cin>>n>>r;
        
        Solution ob;
        cout<<ob.nCr(n, r)<<endl;
    }
    return 0;
}
// } Driver Code Ends