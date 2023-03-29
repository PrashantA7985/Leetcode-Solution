//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    int countSubstring(string s)
{
    int ans=0;
      for(int i=0;i<s.size();i++){
          int l=0,u=0;
               if(s[i]>='A' && s[i]<='Z')u++;
               else l++;
               for(int j=i+1;j<s.size();j++){
                     if(s[j]>='A' && s[j]<='Z')u++;
                        else l++;
                         if(l==u && l!=0)ans++;
               }
              
      }
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
        string S;
        cin>>S;
        Solution obj;
        cout<<obj.countSubstring(S)<<endl;
    }
}  
// } Driver Code Ends