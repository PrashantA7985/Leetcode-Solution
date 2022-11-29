//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    vector<long long int> twoOddNum(long long int a[], long long int n)  
    {
        set<long long>s;
        vector<long long>v;
        long long x=0;
        map<long long,long long>m;
        for(int i=0;i<n;i++){
            x^=a[i];
            m[a[i]]++;
        }
        long long temp=x&~(x-1);
        vector<long long >c,d;
        for(int i=0;i<n;i++){
            if(temp& a[i])c.push_back(a[i]);
            else d.push_back(a[i]);
        }
         long long a1=0,b1=0;
         for(int i=0;i<c.size();i++)a1^=c[i];
         for(int i=0;i<d.size();i++)b1^=d[i];
         v.push_back(a1);
         v.push_back(b1);
         sort(v.begin(),v.end());
         
        reverse(v.begin(),v.end());
        return v;
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int N;
        cin>>N;
        long long int Arr[N];
        for(long int i = 0;i < N;i++)
        cin>>Arr[i];
        Solution ob;
        vector<long long int>ans=ob.twoOddNum(Arr,N);
        for(long long int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends