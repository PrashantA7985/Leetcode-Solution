//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int m=1e9+7;
	    int solve(int i,int arr[],int n,int sum,vector<vector<int>>&dp){
	       
	        if(i==0){
	            if(sum==0 && arr[i]==0)return 2;
	           else if(sum==0)return 1;
	            if(sum==arr[i])return 1;
	            return 0;
	        }
	   long long  int take=0;
	        if(dp[i][sum]!=-1)return dp[i][sum];
	        if(sum>=arr[i])take=solve(i-1,arr,n,sum-arr[i],dp);
	  long long  int no_take=solve(i-1,arr,n,sum,dp);
	        return dp[i][sum]=(take+no_take)%m;
	    }
	int perfectSum(int arr[], int n, int sum)
	{
        // Your code goes here
       vector<vector<int>>dp(n,vector<int>(sum+1,-1));
        int ans=solve(n-1,arr,n,sum,dp);
        return ans;
	}
	  
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends