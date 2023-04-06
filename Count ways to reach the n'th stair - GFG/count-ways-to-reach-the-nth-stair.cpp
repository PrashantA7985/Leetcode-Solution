//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution


{    int m=1e9+7;
    int solve(int n, vector<long long>&v){
        if(n<=1)return 1;
        if(v[n]!=-1)return v[n];
        return v[n]=(solve(n-1,v)%m+solve(n-2,v)%m)%m;
    }
    public:
    //Function to count number of ways to reach the nth stair.
    int countWays(int n)
    {
        vector<long long>v(n+1,-1);
     long long x=solve(n,v);
     return x;
      
    }
};



//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}

// } Driver Code Ends