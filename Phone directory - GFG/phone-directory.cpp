//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<vector<string>> displayContacts(int n, string a[], string s)
    {
        
        vector<vector<string>>v;
        string r;
        sort(a,a+n);
        for(int i=0;i<s.size();i++){
            r.push_back(s[i]);
            vector<string>data;
            for(int j=0;j<n;j++){
                string p=a[j];
                string q=p.substr(0,r.size());
                if(r==q){
                    if(data.size()==0)data.push_back(p);
                  else  if(data.size()!=0 && data.back()!=p)
                    data.push_back(p);
            }
            }
            if(data.size()==0){
                string temp;
                temp.push_back('0');
                data.push_back(temp);
                
            }
            
            v.push_back(data);
        }
        return v;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string contact[n], s;
        for(int i = 0;i < n;i++)
            cin>>contact[i];
        cin>>s;
        
        Solution ob;
        vector<vector<string>> ans = ob.displayContacts(n, contact, s);
        for(int i = 0;i < s.size();i++){
            for(auto u: ans[i])
                cout<<u<<" ";
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends