//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int longestUniqueSubsttr(string s){
        int ans=0;
        int i=0;int j=0;
       int a[26]={0};
        while(i<s.size()){
            a[s[i]-'a']++;
            if(a[s[i]-'a']>1){
               
                while(a[s[i]-'a']>1){
                    if(a[s[j]-'a']!=0){
                    a[s[j]-'a']--;
                    }
                   
                    j++;
                }
                
            }
            ans=max(ans,i-j+1);
            i++;
        }
        // ans=max(ans,i-j);
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
		string str;
		cin>>str;
		Solution ob;
		cout<<ob.longestUniqueSubsttr(str)<<endl;
	}
	return 0;
}
// } Driver Code Ends