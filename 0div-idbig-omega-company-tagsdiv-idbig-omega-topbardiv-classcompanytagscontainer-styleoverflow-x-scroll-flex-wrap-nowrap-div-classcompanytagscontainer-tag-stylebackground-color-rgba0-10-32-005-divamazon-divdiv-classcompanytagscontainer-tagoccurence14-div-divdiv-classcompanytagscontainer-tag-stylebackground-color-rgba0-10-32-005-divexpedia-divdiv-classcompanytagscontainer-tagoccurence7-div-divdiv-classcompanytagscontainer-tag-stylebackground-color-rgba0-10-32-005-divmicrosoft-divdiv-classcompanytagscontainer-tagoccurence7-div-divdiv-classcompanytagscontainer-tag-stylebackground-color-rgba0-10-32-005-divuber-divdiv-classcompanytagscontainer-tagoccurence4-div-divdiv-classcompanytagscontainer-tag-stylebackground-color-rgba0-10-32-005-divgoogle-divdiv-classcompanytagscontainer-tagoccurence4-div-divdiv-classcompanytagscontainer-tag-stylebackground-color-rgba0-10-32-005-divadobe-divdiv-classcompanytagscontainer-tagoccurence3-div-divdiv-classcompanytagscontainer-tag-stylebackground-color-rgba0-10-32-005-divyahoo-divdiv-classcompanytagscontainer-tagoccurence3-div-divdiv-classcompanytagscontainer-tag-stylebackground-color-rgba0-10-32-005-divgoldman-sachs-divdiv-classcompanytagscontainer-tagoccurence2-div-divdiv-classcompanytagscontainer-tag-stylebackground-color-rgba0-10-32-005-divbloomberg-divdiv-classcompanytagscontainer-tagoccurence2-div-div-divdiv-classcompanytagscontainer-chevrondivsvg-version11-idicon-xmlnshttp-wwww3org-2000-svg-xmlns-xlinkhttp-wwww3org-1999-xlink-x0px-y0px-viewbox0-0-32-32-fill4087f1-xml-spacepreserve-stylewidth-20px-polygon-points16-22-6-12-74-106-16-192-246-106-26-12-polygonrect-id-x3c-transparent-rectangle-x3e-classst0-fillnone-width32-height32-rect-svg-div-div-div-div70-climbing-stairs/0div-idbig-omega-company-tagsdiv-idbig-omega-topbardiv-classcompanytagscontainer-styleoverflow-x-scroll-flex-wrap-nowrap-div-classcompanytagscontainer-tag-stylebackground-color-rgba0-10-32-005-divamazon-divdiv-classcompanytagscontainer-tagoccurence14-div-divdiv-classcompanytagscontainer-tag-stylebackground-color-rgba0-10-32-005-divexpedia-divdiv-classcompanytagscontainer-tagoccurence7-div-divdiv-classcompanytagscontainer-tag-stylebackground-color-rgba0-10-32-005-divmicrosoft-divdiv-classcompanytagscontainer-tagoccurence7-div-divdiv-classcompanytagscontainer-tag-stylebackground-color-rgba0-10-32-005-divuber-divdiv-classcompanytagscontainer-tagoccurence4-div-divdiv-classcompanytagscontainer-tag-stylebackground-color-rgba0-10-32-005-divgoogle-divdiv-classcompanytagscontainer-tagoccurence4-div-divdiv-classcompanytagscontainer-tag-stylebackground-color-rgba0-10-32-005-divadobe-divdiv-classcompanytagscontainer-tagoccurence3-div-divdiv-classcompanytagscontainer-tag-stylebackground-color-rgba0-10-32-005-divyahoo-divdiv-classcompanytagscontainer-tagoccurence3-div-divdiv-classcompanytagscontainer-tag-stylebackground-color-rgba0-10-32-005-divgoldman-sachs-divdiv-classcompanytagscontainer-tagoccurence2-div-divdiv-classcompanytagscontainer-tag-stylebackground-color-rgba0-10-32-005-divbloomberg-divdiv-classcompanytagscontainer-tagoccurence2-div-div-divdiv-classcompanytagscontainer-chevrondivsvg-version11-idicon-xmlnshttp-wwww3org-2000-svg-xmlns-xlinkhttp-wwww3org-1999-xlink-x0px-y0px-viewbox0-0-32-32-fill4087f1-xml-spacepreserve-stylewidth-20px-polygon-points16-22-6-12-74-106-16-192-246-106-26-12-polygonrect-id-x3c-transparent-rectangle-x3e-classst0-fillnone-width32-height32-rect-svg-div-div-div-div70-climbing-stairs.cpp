class Solution {
      int f(int n,vector<int>&dp){
          if(n==0)return 1;
          if(n<0)return 0;
          if(dp[n]!=-1)return dp[n];
          int take=f(n-1,dp);
          int notake=f(n-2,dp);
          return dp[n]=take+notake;
      }
public:
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        int ans=f(n,dp);
        return ans;
    }
};