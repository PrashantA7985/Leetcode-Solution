//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long solve(int n, int k, vector<long long> v) {
        // code here
        int i;
        int j=0;
     long long   int sum=0;
        for( i=0;i<k;i++)sum+=v[i];
        v.push_back(sum);
        while(i<n-1){
            sum-=v[j];
            j++;
            sum+=v[i];
            v.push_back(sum);
            i++;
        }
        return v[n-1];
        
    }
};


//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<long long> GeekNum(K);

        for (int i = 0; i < K; i++) cin >> GeekNum[i];

        Solution ob;
        cout << ob.solve(N, K, GeekNum) << "\n";
    }
    return 0;
}

// } Driver Code Ends