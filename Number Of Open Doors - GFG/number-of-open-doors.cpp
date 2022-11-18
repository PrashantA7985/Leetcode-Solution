//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int noOfOpenDoors(long long N) {
        // code here
       long long low=1;
       long long high=N;
       while(low<=high){
           double mid=(low+high)/2;
           if(mid*mid==N)return mid;
           if(mid*mid<N)low=mid+1;
           else high=mid-1;
       }
        
        return --low;
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
        cout << ob.noOfOpenDoors(N) << endl;
    }
    return 0;
}
// } Driver Code Ends