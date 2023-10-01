class Solution {
public:
 long long   int solve(int i,int j,vector<vector<int>>&v,vector<vector<int>>&dp){
        if(i<0 || j<0)return INT_MAX;
     if(i==0 && j==0)return v[0][0];
     if(dp[i][j]!=-1)return dp[i][j];
          long long  temp=min(solve(i-1,j,v,dp),solve(i,j-1,v,dp));
        return dp[i][j]=temp+v[i][j];
    }
    int minPathSum(vector<vector<int>>& v) {
        int n=v.size();
        int m=v[0].size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return solve(n-1,m-1,v,dp);
    }
};