//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for(int i=0;i<n;i++){
            for(int j=1;j<n-i;j++)cout<<" ";
            char x='A';
            for(int j=n-i;j<=n;j++)cout<<char(x++);
            char y='A'+i-1;
            for(int j=n+1;j<n+1+i;j++)cout<<char(y--);
            
            // for(int j=n+i+1;j<2*n-1;j++)cout<<" ";
            cout<<endl;
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends