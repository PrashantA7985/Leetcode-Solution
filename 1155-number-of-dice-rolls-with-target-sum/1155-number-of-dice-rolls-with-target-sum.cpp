class Solution {
public:
    int dp[32][1002];
    int m=1e9+7;
      int solve(int n, int k, int target) {
        if(target<n || target>n*k)return 0;
        if(n==1)return (target<=k)?1:0;
        if(dp[n][target]!=-1)return dp[n][target];
        int sum=0;
        for(int i=1;i<=k;i++){
             sum+=solve(n-1,k,target-i);
            sum%=m;
        }
        return dp[n][target]=sum;
    }
      
    int numRollsToTarget(int n, int k, int target) {
       
        memset(dp,-1,sizeof(dp));
        return solve(n,k,target);
        
    }
};