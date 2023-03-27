//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
    bool check(int n,int D){
        int sum=0;
         int x=n%10;
         if(x==D)return false;
         n=n/10;
        while(n>0){
            int temp=n%10;
            if(temp==D)return false;
            if(temp<=x)return false;
            x=x+temp;
            n=n/10;
            
        }
        return true;
    }
  public:
    vector<int> goodNumbers(int L, int R, int D) {
        // code here
     vector<int>count;
        for(int i=L;i<=R;i++){
            if(check(i,D))count.push_back(i);
            
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int L, R, D;
        cin >> L >> R >> D;
        Solution ob;
        vector<int> ans = ob.goodNumbers(L, R, D);
        for (auto u : ans) cout << u << " ";
        cout << "\n";
    }
}
// } Driver Code Ends