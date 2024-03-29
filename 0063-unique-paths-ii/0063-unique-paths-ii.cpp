class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& v) {
        int n=v.size();
        int m=v[0].size();
        int dp[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(v[i][j]==1)dp[i][j]=0;
                else if(i==0 && j==0)dp[i][j]=1;
                else{
                    int left=0;
                    int up=0;
                    if(i>0)up=dp[i-1][j];
                    if(j>0)left=dp[i][j-1];
                    dp[i][j]=up+left;
                }
            }
        }
        return dp[n-1][m-1];
    }
};