class Solution {
     void dfs(int row,int col,vector<vector<int>>& ans,vector<vector<int>>& image,
      int color,int x){
          ans[row][col]=color;
          int a[]={-1,0,1,0};
          int b[]={0,1,0,-1};
           int n=ans.size();
           int m=ans[0].size();
           for(int i=0;i<4;i++){
              
                   int nrow=row+a[i];
                   int ncol=col+b[i];
                   if(nrow>=0 && nrow<n && ncol>=0 && ncol<m &&
                   ans[nrow][ncol]!=color && image[nrow][ncol]==x){
                     dfs(nrow,ncol,ans,image,color,x);  
                   }
            
           }
      }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
            int x=image[sr][sc];
        vector<vector<int>>ans=image;
        
        dfs(sr,sc,ans,image,color,x);
        return ans;
    
    }
};