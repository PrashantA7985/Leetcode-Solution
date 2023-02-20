//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int countPaths(int n){
        // code here 
        if(n<=1)return 0;
        long int t=0;
        long long m=1e9+7;
        long i=2;
        while(i<=n){
            t=(t*3)%m;
            if(i&1)t-=3;
            else t=(t+3)%m;
            i++;
        }
        return t;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        
        Solution ob;
        cout << ob.countPaths(N) << endl;
    }
    return 0; 
}

// } Driver Code Ends