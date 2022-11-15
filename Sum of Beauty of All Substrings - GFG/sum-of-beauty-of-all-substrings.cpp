//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int beautySum(string s) {
       int ans=0;
        for(int i=0;i<s.size();i++){
          vector<int>v(26);
          for(int i=0;i<26;i++)v[i]=-1;
             
                int x=0;
            for(int j=i;j<s.size();j++){
              v[s[j]-'a']++;
                x=max(x,v[s[j]-'a']+1);
             int y=INT_MAX;
               for(auto it:v){
                   if(it!=-1 && it!=x-1)y=min(y,it+1);
               }
             
               
             
                
        
            
                if(x>y && y>0)ans+=x-y;
            }
        
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.beautySum(s) << endl;
    }
    return 0;
}
// } Driver Code Ends