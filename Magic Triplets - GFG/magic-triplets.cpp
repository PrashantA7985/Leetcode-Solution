//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int countTriplets(vector<int>v){
	    
	   
	     
	     int ans=0;
	     for(int i=0;i<v.size()-1;i++){
	         int count=0;
	         for(int j=i+1;j<v.size();j++){
	             if(v[j]>v[i])count++;
	         }
	         int sum=0;
	         for(int j=0;j<i;j++){
	             if(v[j]<v[i])sum++;
	         }
	         ans+=sum*count;
	        
	     }
	     
	     
	     return ans;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution ob;
		int ans = ob.countTriplets(nums);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends