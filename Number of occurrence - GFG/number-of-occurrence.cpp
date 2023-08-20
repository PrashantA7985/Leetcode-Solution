//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int a[], int n, int x) {
	    // code here
	   int l=0;
	   int h=n-1;
	   int left=-1;
	   while(l<=h){
	       int mid=(l+h)/2;
	       if(a[mid]==x){
	           left=mid;
	           h=mid-1;
	       }
	     else  if(a[mid]>x){
	           h=mid-1;
	       }
	       else{
	           l=mid+1;
	       }
	   }
	   l=0;
	   h=n-1;
	   int right=-1;
	   while(l<=h){
	       int mid=(l+h)/2;
	       if(a[mid]==x){
	           right=mid;
	           l=mid+1;
	       }
	       if(a[mid]>x){
	           h=mid-1;
	       }
	       else{
	           l=mid+1;
	       }
	   }
	   //cout<<left<<" "<<right<<endl;
	   if(left==-1 || right==-1)return 0;
	   return right-left+1;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends