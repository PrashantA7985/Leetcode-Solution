//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int n)
    {
      //Your code here
      sort(arr,arr+n);
      set<int>s;
      for(int i=0;i<n;i++)
      s.insert(arr[i]);
      vector<int>v;
      for(auto x:s){
          v.push_back(x);
      }
      int ans=0;
      int count=1;
      for(int i=1;i<v.size();i++){
          if(v[i]-v[i-1]!=1){
              ans=max(count,ans);
              count=1;
          }
          else count++;
      }
      ans=max(ans,count);
      return ans;
      
      
    }
};

//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends