//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int maxInstance(string s){
        int a[27]={0};
        for(int i=0;i<s.size();i++){
            a[s[i]-96]++;
        }
        int ans=0;
        // cout<<a[1]<<" "<<a[12]<<" "<<a[14]<<" "<<a[15]<<endl;
        while(a[1]>=1 && a[2]>=1 && a[12]>=2  && a[14]>=1  && a[15]>=2 ){
            ans++;
            a[1]--;
            a[2]--;
            a[12]-=2;
            a[14]--;
            a[15]-=2;
        }
        return ans;
        
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.maxInstance(s)<<endl;
    }
    return 0;
}
// } Driver Code Ends