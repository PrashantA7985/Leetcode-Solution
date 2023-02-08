//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++


class Solution{
  public:
  vector<long long int> countZero(int n, int k, vector<vector<int>>& a){
      //Code Here
      vector<long long int>v;
     unordered_set<int>s1;
    unordered_set<int>s2;
      for(int i=0;i<k;i++){
          s1.insert(a[i][0]);
          s2.insert(a[i][1]);
          long long int x=s1.size()*s2.size();
          long long int y=s1.size()+s2.size();
          v.push_back((n*n)-(y*n-x));
      }
      return v;
  }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<vector<int>> arr(k,vector<int>(2));
        for(int i=0;i<k;i++){
            int x, y;
            cin>>x>>y;
            arr[i][0] = x;
            arr[i][1] = y;
        }
        Solution ob;
        vector<long long int> ans = ob.countZero(n,k,arr);
        
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;    
    }
    
    return 0;
}


// } Driver Code Ends