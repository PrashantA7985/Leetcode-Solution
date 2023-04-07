//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{  
    bool check(string &temp){
          int x=temp.size()-1;
          int i=0;
          while(i<x){
              if(temp[i]!=temp[x])return false;
              i++;
              x--;
          }
          return true;
    }
public:
    int addMinChar(string str){    
        //code here
        int n=str.size();
  ;
    
        string s;
        for(int i=n-1;i>=0;i--){
              s=str.substr(0,i+1);
            //  cout<<s<<endl;
              if(check(s))return n-i-1;
        }
      
       return n-1; 
    }
};

//{ Driver Code Starts.


int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin >> str;
        
        Solution ob;
        cout << ob.addMinChar(str) << endl;
    }
    return 0; 
} 
// } Driver Code Ends