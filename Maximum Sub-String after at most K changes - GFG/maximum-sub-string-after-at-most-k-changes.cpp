//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
	public:
		int characterReplacement(string s, int k){
		    int ans=0;
		    for( char c='A';c<='Z';c++){
		        int diff=0;
		        for(int i=0,j=0;i<s.size();i++){
		            if(s[i]!=c) diff++;
		            while(diff>k){
		                if(s[j]!=c) diff--;
		                j++;
		            }
		            ans=max(ans,i-j+1);
		        }
		    }
		    return ans;
		    
		}

};


//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		int k;
		cin >> k;
		Solution obj;
		int ans = obj.characterReplacement(s, k);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends