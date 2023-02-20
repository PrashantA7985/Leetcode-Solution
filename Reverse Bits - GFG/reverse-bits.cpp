//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long reversedBits(long long x) {
           vector<int>s;
           for(int i=0;i<32;i++){
               if(x&(1<<i))s.push_back(1);
               else s.push_back(0);
           }
           long long ans=0;
           reverse(s.begin(),s.end());
           for(int i=0;i<32;i++){
               if(s[i]==1){
               ans+=(1LL*1<<i);
               }
           }
           return ans;
          
    
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long X;
        
        cin>>X;

        Solution ob;
        cout << ob.reversedBits(X) << endl;
    }
    return 0;
}
// } Driver Code Ends