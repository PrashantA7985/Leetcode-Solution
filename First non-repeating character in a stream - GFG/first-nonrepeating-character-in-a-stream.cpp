//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string s){
		    // Code here
		    map<char,int>m;
		    string r;
		    int n=s.size();
		    int j=0;
		    for(int i=0;i<n;i++){
		        m[s[i]]++;
		        while(j<n && m[s[j]]>1){
		            j++;
		        }
		        if(i<j )r.push_back('#');
		        else r.push_back(s[j]);
		    }
		    return r;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends