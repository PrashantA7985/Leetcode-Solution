//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution


{    int m=1e9+7;
   
    public:
    //Function to count number of ways to reach the nth stair.
    int countWays(int n)
    {
       vector<int>v(n+1);
       v[0]=1;
       v[1]=1;
       for(int i=2;i<=n;i++){
           v[i]=(v[i-1]%m+v[i-2]%m)%m;
       }
       return v[n];
      
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