//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
    int solve(int *arr,int n,vector<int>&v){
               if(v[n]!=-1)return v[n];
        if(n==0)return arr[n];
        if(n<0)return 0;
 
     int pick=0;
       
           pick=arr[n]+solve(arr,n-2,v); 
      
int notpick=0+solve(arr,n-1,v);
        return v[n]=max(pick,notpick);
    }
public:	

	int findMaxSum(int *arr, int n) {
	    // code here
	    vector<int>v(n);
	    v[0]=arr[0];
	       for(int i=1;i<n;i++){
	           int pick=arr[i];
	            if(i-2>=0)
	            pick=arr[i]+v[i-2];
	           int nonpick=v[i-1];
	           v[i]=max(pick,nonpick);
	       }
return v[n-1];
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends