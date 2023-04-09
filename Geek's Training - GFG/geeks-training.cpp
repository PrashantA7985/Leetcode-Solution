//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
         int   solve(vector<vector<int>>& v,int n,int last,vector<vector<int>>& dp){
                if(n==0){
                    int maxi=0;
                    for(int i=0;i<3;i++){
                        if(i!=last)maxi=max(maxi,v[n][i]);
                    }
                    return maxi;
                } 
                 if(dp[n][last]!=-1)return dp[n][last];
                  int maxi=0;
             
                  for(int i=0;i<3;i++){
                      if(i!=last){
                          int temp=v[n][i]+solve(v,n-1,i,dp);
                           maxi=max(maxi,temp);
                      }
                  }
                  return dp[n][last]=maxi;
            }
  public:
    int maximumPoints(vector<vector<int>>& v, int n) {
        // Code here
        vector<vector<int>>dp(n,vector<int>(4,-1));
         int ans=solve(v,n-1,3,dp);
         return ans;
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