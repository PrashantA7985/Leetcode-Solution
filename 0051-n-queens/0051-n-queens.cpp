class Solution {
      bool safe(int i,int j,vector<string>&v,int n){
          int row=j;
          int col=i;
          int flag=0;
          while(i>=0 && j>=0){
              if(v[j][i]=='Q')return false;
              i--;
              j--;
          }
          j=row;
          i=col;
          while(i>=0 ){
              if(v[j][i]=='Q')return false;
              i--;
          }
           j=row;
          i=col;
          while(j<n && i>=0){
              if(v[j][i]=='Q')return false;
              j++;
              i--;
          }
          return true;
      }
    void solve(int i,vector<string>&v, vector<vector<string>>&ans,int n){
        if(i==n){
            ans.push_back(v);
            return ;
        }
        for(int j=0;j<n;j++){
            if(safe(i,j,v,n)){
                v[j][i]='Q';
            solve(i+1,v,ans,n);
                v[j][i]='.';
            }
            
            
        }
    }
public:
    vector<vector<string>> solveNQueens(int n) {
      vector<string>v(n);
         vector<string>arr;
         vector<vector<string>>ans;
        for(int i=0;i<n;i++){
            string s;
            for(int j=0;j<n;j++)s.push_back('.');
            v[i]=s;
        }
        solve(0,v,ans,n);
        return ans;
        
    }
};