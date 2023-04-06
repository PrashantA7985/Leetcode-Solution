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

     vector<int>dp(n+1);
     int first=0;
     int sec=0;
     int curr=0;
     for(int i=1;i<n;i++){
         int x=first+abs(v[i]-v[i-1]);
         int y=INT_MAX;
         if(i>1){
             y=sec+abs(v[i]-v[i-2]);
         }
        curr =min(x,y);
         sec=first;
         first=curr;
     }
     return first;
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