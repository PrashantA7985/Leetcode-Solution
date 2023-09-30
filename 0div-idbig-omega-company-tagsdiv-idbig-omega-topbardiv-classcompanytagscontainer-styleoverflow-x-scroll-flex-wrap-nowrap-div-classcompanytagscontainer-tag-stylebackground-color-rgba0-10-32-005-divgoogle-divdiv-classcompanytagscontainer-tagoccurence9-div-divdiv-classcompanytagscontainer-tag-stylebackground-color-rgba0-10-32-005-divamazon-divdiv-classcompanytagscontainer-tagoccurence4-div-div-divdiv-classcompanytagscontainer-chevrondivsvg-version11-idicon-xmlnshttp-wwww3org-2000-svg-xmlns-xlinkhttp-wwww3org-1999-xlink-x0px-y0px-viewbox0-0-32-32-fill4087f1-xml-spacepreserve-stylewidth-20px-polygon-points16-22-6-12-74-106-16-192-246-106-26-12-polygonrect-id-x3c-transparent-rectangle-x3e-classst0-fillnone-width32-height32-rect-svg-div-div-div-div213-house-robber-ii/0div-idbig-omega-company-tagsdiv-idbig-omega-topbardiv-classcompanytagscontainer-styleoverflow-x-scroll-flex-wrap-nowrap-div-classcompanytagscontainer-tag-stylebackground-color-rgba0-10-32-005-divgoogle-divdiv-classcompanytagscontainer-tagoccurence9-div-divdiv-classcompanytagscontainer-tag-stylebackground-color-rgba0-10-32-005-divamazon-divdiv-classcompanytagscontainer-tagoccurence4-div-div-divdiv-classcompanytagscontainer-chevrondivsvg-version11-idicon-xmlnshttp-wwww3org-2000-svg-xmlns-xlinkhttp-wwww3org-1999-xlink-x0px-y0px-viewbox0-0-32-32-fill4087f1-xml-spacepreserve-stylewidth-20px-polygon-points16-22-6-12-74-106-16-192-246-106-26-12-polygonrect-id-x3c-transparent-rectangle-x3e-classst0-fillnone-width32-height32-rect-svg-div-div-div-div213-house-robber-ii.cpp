class Solution {
public:
    int solve(int i,vector<int>&nums,vector<int>&dp){
           if(i==0)return nums[0];
          if(i<0)return 0;
        if(dp[i]!=-1)return dp[i];
        int take=nums[i]+solve(i-2,nums,dp);
        int notake=solve(i-1,nums,dp);
        return dp[i]=max(take,notake);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if (n==1)return nums[0];
        vector<int>a,b;
        vector<int>dp(n,-1);
        for(int i=0;i<n-1;i++)a.push_back(nums[i]);
      
        for(int i=1;i<n;i++)b.push_back(nums[i]);
        
         int ans= solve(n-2,a,dp);
          vector<int>p(n,-1);
        ans=max(ans,solve(n-2,b,p));
        return ans;
    }
};