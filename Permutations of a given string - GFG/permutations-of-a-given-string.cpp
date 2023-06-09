//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{   void solve(int n,set<string> & ans, string s,string r,int arr[]){
      if(r.size()==n){
    ans.insert(r);
          return;
      }
      for(int i=0;i<n;i++){
          if(arr[i]==0){
              r.push_back(s[i]);
              arr[i]=1;
              solve(n,ans,s,r,arr);
              arr[i]=0;
              r.pop_back();
          }
      }
}
      
  

	public:
		vector<string>find_permutation(string s)
		{
		   set<string>ans;
		   string r;
		   int n=s.size();
		   int arr[n]={0};
		   
		   solve(n,ans,s,r,arr);
		   vector<string> res;
		   for(auto it:ans){
		       res.push_back(it);
		   }
		   return res;
		   
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends