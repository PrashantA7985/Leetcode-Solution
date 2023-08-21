//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    int Count(vector<vector<int> >& v) {
        // Code here
        int n=v.size();
        int m=v[0].size();
        int ans=0;
        for(int i=0;i<v.size();i++){
            for(int j=0;j<v[i].size();j++){
                int count=0;
                if(v[i][j]==1){
                for(int x=-1;x<=1;x++){
                    for(int y=-1;y<=1;y++){
                        int row=i+x;
                        int col=j+y;
                        if(row>=0 && row<n && col>=0 && col<m ){
                            if(v[row][col]==0)count++;
                        }
                    }
                }
                if(count%2==0 && count>0)ans++;
                }
            }
        }
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
		vector<vector<int>> matrix(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		int ans = ob.Count(matrix);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends