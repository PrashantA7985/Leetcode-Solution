//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    long long int solve(string s,int k){
        int j=0;
        long long int ans=0;
        vector<int>m(26);
        int count=0;
        for(int i=0;i<s.size();i++){
            m[s[i]-'a']++;
            if(m[s[i]-'a']==1)count++;
            while(count>k){
                m[s[j]-'a']--;
                if(m[s[j]-'a']==0)count--;
                j++;
            }
         ans+=i-j+1;
        }
        return ans;
    }
    long long int substrCount (string s, int k) {
    	//code here.
    long long	int ans=solve(s,k);
   long long	int nas=solve(s,k-1);
    	return ans-nas;
    }
};

//{ Driver Code Starts.


int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		int k; cin >> k;
		Solution ob;
		cout <<ob.substrCount (s, k) << endl;
	}
}
// } Driver Code Ends