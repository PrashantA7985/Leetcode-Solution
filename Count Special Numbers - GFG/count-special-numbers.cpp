//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
    bool  check(int n,unordered_map<int,int>&m){
       
        for(int i=1;i*i<=n;i++){
            if(n%i==0){
                int x=n/i;
                if(m[x]!=0)return true;
                if(m[i]!=0)return true;
            }
        }
        return false;
    }
  public:
    int countSpecialNumbers(int n, vector<int> arr) {
        // Code here
        int count=0;
        unordered_map<int,int>m;
        for(int i=0;i<n;i++)m[arr[i]]++;
        for(int i=0;i<n;i++){
            m[arr[i]]--;
            if( check(arr[i],m)){
               count++;
           };
           m[arr[i]]++;
            
        }
        return count;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }

        Solution ob;
        cout << ob.countSpecialNumbers(N, arr) << endl;
    }
    return 0;
}
// } Driver Code Ends