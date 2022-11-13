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
              vector<int>m(26);
            for(int k=0;k<26;k++)m[k]=-1;
             int x=0;
            for(int j=i;j<s.size();j++){
              m[int(s[j]-'a')]++;
              int y=INT_MAX;
               
              x=max(m[int(s[j]-'a')]+1,x);
                for(int k=0;k<26;k++){
                    if(m[k]!=x && m[k]!=-1){
                        y=min(m[k]+1,y);
                    }
                }
             
                
                
           
                        
                if( y!=0)ans+=x-y;
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