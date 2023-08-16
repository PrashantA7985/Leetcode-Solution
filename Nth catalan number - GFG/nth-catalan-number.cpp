//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find the nth catalan number.
    int findCatalan(int n) 
    {   int m=1e9+7;
        vector<int>v(n+1);
        v[0]=1;
        v[1]=1;
        for(int i=2;i<=n;i++){
            for(int j=0;j<i;j++){
                
                long long p=(v[j]*1LL*v[i-1-j])%m;
                v[i]=int(p+v[i])%m;
            }
        }
        return v[n];
    }
};

//{ Driver Code Starts.
int main() 
{
	int t;
	cin>>t;
	while(t--) {
	    
	    int n;
	    cin>>n;
	    Solution obj;
	    cout<< obj.findCatalan(n) <<"\n";    
	}
	return 0;
}
// } Driver Code Ends