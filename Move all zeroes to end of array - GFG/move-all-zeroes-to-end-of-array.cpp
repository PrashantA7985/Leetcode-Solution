//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	void pushZerosToEnd(int a[], int n) {
	    // code here
	
	  int i=0;
	  int j=0;
	  while(i<n && j<n){
	      while(i<n && a[i]!=0)i++;
	       while(j<n && a[j]==0)j++;
	      if(i>=j ){
	          j=i;
	          while(j<n && a[j]==0)j++;
	             if(j>n-1)break;
	          swap(a[i],a[j]);
	          
	     
	      }
	      else{
	          if(j>n-1)break;
	          swap(a[i],a[j]);
	          
	      }
	      i++;
	      
	  }
	 
	}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.pushZerosToEnd(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends