//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
      string maxSum(string w,char x[], int b[],int n){
           string ans;
           int z=INT_MIN;
           int k=0;
           map<char,int>m;
           for(int i=0;i<n;i++)m[x[i]]=b[i];
           int sum=0;
           for(int i=0;i<w.size();i++){
               if(m.find(w[i])!=m.end())sum+=m[w[i]];
               else sum+=w[i];
                if(z<sum){
                   z=sum;
                  ans=w.substr(k,i-k+1); 
               }
               if(sum<0){
                   sum=0;
                   k=i+1;
               }
               
           }
           return ans;
      }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string w;
        cin>>w;
        int n;
        cin>>n;
        char x[n];
        int b[n];
        for(int i = 0;i<n;i++)
            cin>>x[i];
        for(int i = 0;i<n;i++)
            cin>>b[i];
        Solution ob;
        cout << ob.maxSum(w,x,b,n) << endl;
    }
    return 0; 
}
// } Driver Code Ends