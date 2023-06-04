//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string reverseEqn (string s)
        {
               stack<char>st;
               string ans;
               for(int i=0;i<s.size();i++){
                   st.push(s[i]);
               }
               while(!st.empty()){
                   string r;
                   while(!st.empty() && st.top()!='+'
                   && st.top()!='-' && st.top()!='*'
                   && st.top()!='/'){
                       r.push_back(st.top());
                       st.pop();
                   }
                   reverse(r.begin(),r.end());
                   if(!st.empty()){
                       r.push_back(st.top());
                       st.pop();
                   }
                   ans+=r;
               }
               return ans;
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.reverseEqn (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends