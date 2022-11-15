//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    // code here
    int z= lower_bound(arr,arr+n,x)-arr;
        int y= upper_bound(arr,arr+n,x)-arr;
        y--;
        vector<int>ans;
        if(z>y){
            ans.push_back(-1);
            ans.push_back(-1);
        }
        else{
        ans.push_back(z);
         ans.push_back(y);
        }
         return ans;
    
}

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
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends