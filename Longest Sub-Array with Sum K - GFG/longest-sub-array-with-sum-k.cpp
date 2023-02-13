//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int a[],  int n, int k) 
    { 
        // Complete the function
        map<int,int>m;
        vector<int>v(n);
        v[0]=a[0];
        for(int i=1;i<n;i++){
           v[i]=a[i]+v[i-1]; 
        }
        // for(int i=0;i<n;i++)cout<<v[i]<<" ";
        int ans=0;
        // cout<<endl;
        for(int i=0;i<n;i++){
            if(v[i]==k)ans=max(ans,i+1);
            if(m.find(v[i]-k)!=m.end()){
                ans=max(ans,i-m[v[i]-k]);
            }
            if(m.find(v[i])==m.end())
            m[v[i]]=i;
        }
        return ans;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends