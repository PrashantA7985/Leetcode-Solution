//{ Driver Code Starts
//Initial Template for C++



#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
    public:
        // Function to return the length of the
        //longest subarray with ppositive product
        int maxLength(vector<int> &a,int n){
           //code here
           int flag=0;
           int x=1,y=1;
           int ans=0;
           int count=0;
           int temp=0;
           int z=0;
           for(int i=0;i<n;i++){
               if(a[i]==0){
                   x=0;
                   z=0;
                   temp=0;
               }
               else{
                   if(a[i]>0)x++;
                   else z++;
                  
                   if(z%2==0){
                     count=temp+1;  
                   }
                   ans=max(count,ans);
                   temp++;
               }
           }
           count=0;
           temp=0;
           z=0;
             for(int i=n-1;i>=0;i--){
               if(a[i]==0){
                   y=0;
                   z=0;
                   temp=0;
               }
               else{
                  if(a[i]>0)y++;
                  else z++;
                 
                   if( z%2==0)count=temp+1;
                   ans=max(count,ans);
                    temp++;
               }
           }
          return ans; 
           
        }
};

//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> arr(n);
	    for(int i = 0;i<n;i++){
	        cin>>arr[i];
	    }
	    Solution ob;
	    int res = ob.maxLength(arr,n);
	    cout<<res<<"\n";
	}
	return 0;
}
// } Driver Code Ends