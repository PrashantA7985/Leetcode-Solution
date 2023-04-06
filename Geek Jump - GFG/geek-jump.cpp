//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
     int solve(vector<int>&v,int n, vector<int>&dp){
         if(n==0)return 0;
         if(dp[n]!=-1)return dp[n];
         int l=solve(v,n-1,dp)+abs(v[n]-v[n-1]);
         int h=INT_MAX;
         if(n>1)
          h=solve(v,n-2,dp)+abs(v[n]-v[n-2]);
         return dp[n]=min(l,h);
         
     }
    int minimumEnergy(vector<int>& v, int n) {
        // Code here

        vector<int>dp(n,-1);
        int x=solve(v,n-1,dp);
        return x;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.minimumEnergy(arr, N) << "\n";
    }
    return 0;
}
// } Driver Code Ends