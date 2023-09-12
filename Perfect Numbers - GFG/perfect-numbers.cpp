//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

    class Solution {
  public:
    long long int isPerfectNumber(long long N) {
        long long int ans=0;
        if(N==1)
        return ans;
        for(int i=2;i<=sqrt(N);i++){
            if(N%i==0){
                if(i==N/2){
                    ans+=i;
                }
                else{
                     ans+=i;
                ans+=N/i;
                }
               
            }
        }
        ans+=1;
        return ans==N;
}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.isPerfectNumber(N) << endl;
    }
    return 0;
}
// } Driver Code Ends