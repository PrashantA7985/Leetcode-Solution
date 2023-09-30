class Solution {
public:
    int solve(int i,vector<int>&v){
     if(i==0)return v[0];
        if(i<0)return 0;
        int notake=solve(i-1,v);
        int take=v[i]+solve(i-2,v);
         return max(take,notake);
}
    int rob(vector<int>& v) {
        int n=v.size();
        // return solve(n-1,v);
        vector<int>dp(n);
        dp[0]=v[0];
        for(int i=1;i<n;i++){
            int take=v[i];
            if(i>1)take=v[i]+dp[i-2];
            int notake=dp[i-1];
            dp[i]=max(take,notake);
        }
        return dp[n-1];
        
    }
};