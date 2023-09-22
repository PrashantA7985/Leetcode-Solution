//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    vector<int> find(int arr[], int n , int x )
    {
        // code here
        vector<int>v;
        int i=0;
        int j=n-1;
        int a=-1,b=-1;
        while(i<=j){
            int mid=(i+j)/2;
            if(arr[mid]==x){
                a=mid;
            }
            if(arr[mid]>=x)j=mid-1;
            
            else i=mid+1;
        }
        v.push_back(a);
        i=0;
        j=n-1;
        while(i<=j){
            int mid=(i+j)/2;
            if(arr[mid]==x)b=mid;
            if(arr[mid]<=x)i=mid+1;
            else j=mid-1;
        }
        v.push_back(b);
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
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends