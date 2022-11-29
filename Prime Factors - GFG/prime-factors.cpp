//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
	public:
	vector<int>AllPrimeFactors(int n) {
	   vector<int>v;
	   if(n<=1)return v;
	   for(int i=2;i*i<=n;i++){
	       if(n%i==0){
	           v.push_back(i);
	           while(n%i==0){
	               n=n/i;
	           }
	       }
	   
	   }
	       if(n>1)v.push_back(n);
	       return v;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		long long int N;
		cin >> N;
		Solution ob;
		vector<int>ans = ob.AllPrimeFactors(N);
		for(auto i: ans)
			cout << i <<" ";
		cout <<"\n";
	}  
	return 0;
}
// } Driver Code Ends