//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    bool makePalindrome(int n,vector<string> &arr){
        // Code here
        map<string,int>m;
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        int count=0;
        string r;
        for(int i=0;i<n;i++){
            string s=arr[i];
            reverse(s.begin(),s.end());
    
            if(m[s]==0){
                count++;
                if(count==1)r=s;
            }
            else m[s]--;
            if(count>1)return false;
        }
       
         for(int i=0, j=r.size()-1;i<j;i++,j--){
             if(r[i]!=r[j])return false;
         }
        return true;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        if(ob.makePalindrome(n,arr)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
// } Driver Code Ends