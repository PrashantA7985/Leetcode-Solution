//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int solve(vector<vector<int>>&v,  int i,int x,vector<vector<int>>&dp){
        if(i==0){
            int ans=0;
            for(int j=0;j<3;j++){
                 if(j!=x)ans=max(ans,v[i][j]);
            }
            return ans;
        }
        if(dp[i][x]!=-1)return dp[i][x];
        int ans=0;
        for(int j=0;j<3;j++){
            if(j!=x){
               ans=max(ans, v[i][j]+solve(v,i-1,j,dp));
            }
        }
        return dp[i][x]=ans;
    }
    int maximumPoints(vector<vector<int>>& v, int n) {
        // Code here
        vector<vector<int>>dp(n,vector<int>(4,-1));
        return solve(v,n-1,3,dp);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> points;
        for (int i = 0; i < n; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            points.push_back(temp);
        }

        Solution obj;
        cout << obj.maximumPoints(points, n) << endl;
    }
    return 0;
}
// } Driver Code Ends