//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
    long long fact(long long x){
        long long ans=1;
        for(int i=1;i<=x;i++){
            ans=ans*i;
           
        }
         return ans;
    }
  public:
    long long findRank(string str) {
        long long int ans=0;
        vector<int>v;
        string s=str;
        sort(s.begin(),s.end());
        for(int i=0;i<str.size();i++){
            for(int j=0;j<s.size();j++){
                if(str[i]==s[j]){
                    v.push_back(j);
                    string r=s.substr(0,j);
                    string p=s.substr(j+1,s.size()-j);
                    s=r+p;
                    
                    break;
                }
            }
        }
        for(int i=0;i<v.size();i++){
            long long x=fact(v.size()-i-1);
            long long y=v.size()-i-1;
            
            ans+=v[i]*x;
        }
        return ans+1;
    }
};

//{ Driver Code Starts.
int main(){
    int T;
    cin>>T;
    while(T--){
        string s;
        cin>>s;
        Solution obj;
        long long ans = obj.findRank(s);
        cout<<ans<<endl;
    }
}
// } Driver Code Ends