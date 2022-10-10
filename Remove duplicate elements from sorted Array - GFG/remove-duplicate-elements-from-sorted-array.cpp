//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    int remove_duplicate(int a[],int n){
          int ans=1;
          int x=a[0];
          int j=1;
          for(int i=1;i<n;i++){
              if(x==a[i]){
                  while(i<n && x==a[i])i++;
                  i--;
              }
              else {
                  ans++;
                  a[j]=a[i];
                  j++;
                  x=a[i];
              }
          }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
        }
    Solution ob;
    int n = ob.remove_duplicate(a,N);

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    }
}
// } Driver Code Ends