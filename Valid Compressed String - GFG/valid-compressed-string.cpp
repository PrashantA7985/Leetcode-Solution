//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int checkCompressed(string s, string t) {
        // code here
        int n=s.size();
        int m=t.size();
        int i=0;
        int j=0;
        while(i<m  && j< n){
            while(i<m && j<n && s[j]==t[i]){
                i++;
                j++;
            }
            int temp=0;
                   string c;
                   if(t[i]>='0' && t[i]<='9'){
            while(i<m && t[i]>='0' && t[i]<='9'){
         
                c.push_back(t[i]);
                i++;
            }
           
                temp=stoi(c);
                // cout<<temp<<endl;
                while(j<n && temp--){
                    j++;
                    if(j==n && temp!=0)return 0;
                }
            }
            
            if( t[i]!=s[j])return 0;
           
        }
        return 1;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S,T;
        
        cin>>S>>T;

        Solution ob;
        cout << ob.checkCompressed(S,T) << endl;
    }
    return 0;
}
// } Driver Code Ends