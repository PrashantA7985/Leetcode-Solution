//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int distributeTicket(int n, int k) {
        // code here
        deque<int>q;
        for(int i=0;i<n;i++)q.push_back(i+1);
        int res=0;
        int i=0;
        while(!q.empty()){
           if(i==0){
               int x=k;
               while(!q.empty() && x--){
                   res=q.front();
                   q.pop_front();
               } 
               i=1;
        }
        else{
             int x=k;
               while(!q.empty() && x--){
                   res=q.back();
                   q.pop_back();
               } 
               i=0;
        }
        }
       return res; 
        
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        int K;
        scanf("%d",&K);
        
        Solution obj;
        int res = obj.distributeTicket(N, K);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends