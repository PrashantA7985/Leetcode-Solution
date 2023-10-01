class Solution {
public:
    int solve(int i,vector<int>&v,int buy,int n,vector<vector<int>>&dp){
        if(i==n)return 0;
        int profit=0;
        if(dp[i][buy]!=-1)return dp[i][buy];
        if(buy){
            int take=-v[i]+solve(i+1,v,0,n,dp);
            int notake=solve(i+1,v,1,n,dp);
            profit=max(take,notake);
        }
        else {
            int take=v[i]+solve(i+1,v,1,n,dp);
            int notake=solve(i+1,v,0,n,dp);
            profit=max(take,notake);
        }
        return dp[i][buy]=profit;
    }
    int maxProfit(vector<int>& v) {
        vector<vector<int>>dp(v.size(),vector<int>(2,-1));
        return solve(0,v,1,v.size(),dp);
    }
};