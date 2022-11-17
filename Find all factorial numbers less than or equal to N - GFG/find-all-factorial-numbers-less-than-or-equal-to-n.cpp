//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public: long long x=1;
 vector<long long>ans;
    vector<long long> solve(long long i,long long n){
       x=x*i;
       if(x>n)return ans;
       ans.push_back(x);
       solve(i+1,n);
       return ans;
    }
    
    vector<long long> factorialNumbers(long long N)
    {
     vector<long long>v;
     v=solve(1,N);
     return v;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long N;
        cin>>N;
        Solution ob;
        vector<long long> ans = ob.factorialNumbers(N);
        for(auto num : ans){
            cout<<num<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}
// } Driver Code Ends