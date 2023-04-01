//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    void solve(int i,vector<int>&a,int n, int b, vector<vector<int>>&ans, vector<int>&ds){
        if(i==n){
            if(b==0){
                ans.push_back(ds);
            }
            return;
        }
        if(a[i]<=b){
            ds.push_back(a[i]);
            solve(i,a,n,b-a[i],ans,ds);
               ds.pop_back();
        }
     
        solve(i+1,a,n,b,ans,ds);
        return ;
    }
    
    vector<vector<int> > combinationSum(vector<int> &arr, int b) {
   
        set<int>s;
        for(int i=0;i<arr.size();i++)s.insert(arr[i]);
        vector<int>a;
        for(auto it:s)a.push_back(it);
       
        vector<vector<int>>ans;
        vector<int>ds;
        int n=a.size();
         solve(0,a,n,b,ans,ds);
     
        return ans;
        
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            A.push_back(x);
        }   
        int sum;
        cin>>sum;
        Solution ob;
        vector<vector<int>> result = ob.combinationSum(A, sum);
   		if(result.size()==0){
   			cout<<"Empty";
   		}
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}	
// } Driver Code Ends