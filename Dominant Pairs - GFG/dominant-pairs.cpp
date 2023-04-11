//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int dominantPairs(int n,vector<int> &arr){
        // Code here
        sort(arr.begin()+n/2,arr.end());
        int count=0;
        for(int i=n/2;i<n;i++)arr[i]=arr[i]*5;
       for(int i=0;i<n/2;i++){
          auto x=upper_bound(arr.begin()+n/2,arr.end(),arr[i])-arr.begin();
         count+=x-n/2;
       }
        return count;
    }  
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.dominantPairs(n,arr)<<endl;
    }
}
// } Driver Code Ends