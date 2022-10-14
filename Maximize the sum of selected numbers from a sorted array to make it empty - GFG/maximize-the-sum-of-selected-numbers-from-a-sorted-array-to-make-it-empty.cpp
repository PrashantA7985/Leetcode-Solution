//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 
  

// } Driver Code Ends
class Solution{
    public:
    int maximizeSum(int a[], int n) 
    {
        map<int,int>m;
        for(int i=0;i<n;i++)m[a[i]]++;
        sort(a,a+n);
        reverse(a,a+n);
        int sum=0;
        for(int i=0;i<n;i++){
            if(m[a[i]]!=0){
                if(m[a[i]-1]!=0)m[a[i]-1]--;
                sum+=a[i];
                m[a[i]]--;
            }
        }
        return sum;
    }

};


//{ Driver Code Starts.



int main()
{
    
    int t;cin>> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr, arr+n);
        Solution ob;
        
        cout << ob.maximizeSum(arr, n) << endl;
        
        
    }

}


// } Driver Code Ends