//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
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

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>image(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> image[i][j];
		}
		int sr, sc, newColor;
		cin >> sr >> sc >> newColor;
		Solution obj;
		vector<vector<int>> ans = obj.floodFill(image, sr, sc, newColor);
		for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends