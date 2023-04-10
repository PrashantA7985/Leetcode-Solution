//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
 
    int maxIntersections(vector<vector<int>>v, int n) {
        // Code here
       map<int,int>m;
       for(int i=0;i<n;i++){
           m[v[i][0]]++;
           m[v[i][1]+1]--;
       }
       int psum=0;
       int ans=0;
       for(auto it:m){
           ans=max(ans,psum);
           psum+=it.second;
       }
       return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<vector<int>> mat(N, vector<int>(2));
        for (int j = 0; j < 2; j++) {
            for (int i = 0; i < N; i++) {
                cin >> mat[i][j];
            }
        }
        Solution obj;
        cout << obj.maxIntersections(mat, N) << endl;
    }
}
// } Driver Code Ends