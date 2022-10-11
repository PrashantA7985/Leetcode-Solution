//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++












































class Solution{
public:
    string decodedString(string s){
        // code here
        stack<char>st;
        string ans;
        for(int i=0;i<s.size();i++){
            if(s[i]==']'){
                string r="";
            
                while(!st.empty() && st.top()!='['){
                    r.push_back(st.top());
                   
                    st.pop();
                }
                st.pop();
          
               
                 
              
                string tmp=r;
                string p;
              while(!st.empty() && st.top()>='0' && st.top()<='9'){
                  p.push_back(st.top());
                  st.pop();
              }
             reverse(p.begin(),p.end());
             int x=stoi(p);
                x=x-1;
           
                while(x--){
                    r+=tmp;
                }
               reverse(r.begin(),r.end());
               for(int j=0;j<r.size();j++)st.push(r[j]);
               
            }
            else{
            st.push(s[i]);
            }
        }
        
       while(!st.empty()){
           ans.push_back(st.top());
           st.pop();
       }
     
       reverse(ans.begin(),ans.end());
       
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.decodedString(s)<<"\n";
    }
    return 0;
}
// } Driver Code Ends