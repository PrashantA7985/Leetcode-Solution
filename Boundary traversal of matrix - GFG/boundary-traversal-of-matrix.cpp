//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends

class Solution
{   
    public:
    //Function to return list of integers that form the boundary 
    //traversal of the matrix in a clockwise manner.
    vector<int> boundaryTraversal(vector<vector<int> > arr, int n, int m) 
    {
        vector<int>v;
        if(n==1){
            for(int i=0;i<m;i++){
            v.push_back(arr[0][i]);
        } 
        return v;
        }
        if(m==1){
           for(int i=0;i<n;i++){
            v.push_back(arr[i][0]);
        } 
        return v;
        }
        for(int i=0;i<m;i++){
            v.push_back(arr[0][i]);
        }
        for(int i=1;i<n;i++){
            v.push_back(arr[i][m-1]);
        }
          for(int i=m-2;i>=0;i--){
            v.push_back(arr[n-1][i]);
        }
          for(int i=n-2;i>=1;i--){
            v.push_back(arr[i][0]);
        }
        return v;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int n,m;
        cin>>n>>m;
        vector<vector<int> > matrix(n); 

        for(int i=0; i<n; i++)
        {
            matrix[i].assign(m, 0);
            for( int j=0; j<m; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.boundaryTraversal(matrix, n, m);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends