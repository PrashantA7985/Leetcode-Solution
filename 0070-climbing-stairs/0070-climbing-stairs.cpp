class Solution {
      int f(int n,vector<int>&dp){
          if(n==0|| n==1)return dp[n]= 1;
          if(dp[n]!=-1)return dp[n];
          return dp[n]=f(n-1,dp)+f(n-2,dp);
      }
public:
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        int ans=f(n,dp);
        return ans;
    }
};