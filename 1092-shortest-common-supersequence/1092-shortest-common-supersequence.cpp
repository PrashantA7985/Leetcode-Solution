class Solution {
public:
    string shortestCommonSupersequence(string s, string t) {
          int n=s.size();
            int m=t.size();
           vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        
          for(int i=0;i<=n;i++)dp[i][0]=0;
          for(int j=0;j<=m;j++)dp[0][j]=0;
           for(int i=1;i<=n;i++){
               for(int j=1;j<=m;j++){
                   if(s[i-1]==t[j-1]){
                       dp[i][j]=1+dp[i-1][j-1];
                   }
                   else if(dp[i-1][j]>dp[i][j-1]){
                       dp[i][j]=dp[i-1][j];
                   }
                   else{
                       dp[i][j]=dp[i][j-1];
                   }
               }
           }    
        // for(int i=0;i<=n;i++){
        //     for(int j=0;j<=m;j++)cout<<dp[i][j]<<" ";
        //     cout<<endl;
        // }
        int i=n;
        int j=m;
        string r;
        while(i>0 && j>0){
               if(s[i-1]==t[j-1]){
                   r.push_back(s[i-1]);
                   i--;
                   j--;
               }
            else if(dp[i-1][j]>dp[i][j-1]){
                    r.push_back(s[i-1]);
                    i--;
                
            }
            else{
                r.push_back(t[j-1]);
                j--;
            }
        }
        
        while(i>0){
            r.push_back(s[i-1]);
            i--;
        }
        while(j>0){
            r.push_back(t[j-1]);
            j--;
        }
        reverse(r.begin(),r.end());
        return r;
    }
};