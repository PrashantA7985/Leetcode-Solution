class Solution {
public:
    void setZeroes(vector<vector<int>>& v) {
         int n=v.size();
        int m=v[0].size();
          vector<int>a(n,0);
          vector<int>b(m,0);
        
        
         
        
         for(int i=0;i<n;i++){
              for(int j=0;j<m;j++){
                  if(v[i][j]==0){
                      a[i]=1;
                      b[j]=1;
                  }
              }
         }
        
        for(int i=0;i<n;i++){
            if(a[i]==1){
                for(int j=0;j<m;j++){
                    v[i][j]=0;
                }
            }
        }
            for(int j=0;j<m;j++){
            if(b[j]==1){
                for(int i=0;i<n;i++){
                    v[i][j]=0;
                }
            }
        }
         
             
        
    }
};