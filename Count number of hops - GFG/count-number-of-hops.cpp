//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to count the number of ways in which frog can reach the top.
    int m=1e9+7;
    long long solve(int n,vector<long long>&dp){
        if(n<0)return 0;
           if(n==0)return 1;
           if(dp[n]!=-1)return dp[n];
         long long  int x=solve(n-1,dp);
         long long  int y=solve(n-2,dp);
         long long  int z=solve(n-3,dp);
           return dp[n]=(x%m+y%m+z%m)%m;
    }
    long long countWays(int n)
    {
        vector<long long>dp(n+1,-1);
        long long ans=solve(n,dp);
        return ans;
        
    }
};


//{ Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin >> t;
	
	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;
		Solution ob;
		//calling function countWays()
		cout << ob.countWays(n) << endl;
	}
    
    return 0;
    
}

// } Driver Code Ends