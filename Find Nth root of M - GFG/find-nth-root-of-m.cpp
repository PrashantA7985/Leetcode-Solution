//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	 double solve(long long int x,int n){
	    double ans=1;
	    for(int i=1;i<=n;i++){
	        ans=ans*x;
	    }
	    return ans;
	}
	int NthRoot(int n, int m)
	{
	     long long  low=1;
      long long high=m;
    
        while(low<=high){
            long long mid=(low+high)/2;
        double temp=solve(mid,n);
           
            
             if(m==temp)return mid;
             else if(temp>m)high=mid-1;
            else {
              
                low=mid+1;
              
            }
        }
        return -1;
	}  
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		Solution ob;
		int ans = ob.NthRoot(n, m);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends