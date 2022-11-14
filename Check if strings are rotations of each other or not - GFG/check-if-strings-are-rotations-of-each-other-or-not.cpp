//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if two strings are rotations of each other or not.
    bool areRotations(string s1,string s2)
    {
       
        int i;
      for( i=0;i<s1.size();i++){
          if(s2[0]==s1[i]){
           string r=s1.substr(i,s1.size()-i);
           string p=s1.substr(0,i);
              r+=p;
            
              if(r==s2)return true;
          }
      }
    
      return false;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1;
        string s2;
        cin>>s1>>s2;
        Solution obj;
        cout<<obj.areRotations(s1,s2)<<endl;

    }
    return 0;
}

// } Driver Code Ends