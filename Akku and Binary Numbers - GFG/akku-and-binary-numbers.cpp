//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:
    void precompute()
    {
        // Code Here
    }
    
    long long solve(long long l, long long r){
        // Code Here
        long long ans=0;
        for(int i=0;i<63;i++){
            for(int j=i+1;j<63;j++){
                for(int k=j+1;k<63;k++){
                    long long x=0;
                    long long y=1;
                    x=x|(y<<i);
                    x=x|(y<<j);
                    x=x|(y<<k);
                    if(x>=l && x<=r)ans++;
                }
            }
        }
        return ans;
    }
    
};



//{ Driver Code Starts.

int main()
{
    int t;
    Solution ob;
    ob.precompute();
    cin>>t;
    while(t--)
    {
        long long l,r;
        cin>>l>>r;
        cout << ob.solve(l, r) << endl; 
    }
    return 0;
}
// } Driver Code Ends