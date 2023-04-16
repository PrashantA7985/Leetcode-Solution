//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution {
  public:
    long long solve(int n, vector<int> &a, vector<int> &b) {
        // code here
        vector<int>oddA,evenA;
        vector<int>oddB,evenB;
        for(int i=0;i<n;i++){
            if(a[i]&1)oddA.push_back(a[i]);
            else evenA.push_back(a[i]);
        }
         for(int i=0;i<n;i++){
            if(b[i]&1)oddB.push_back(b[i]);
            else evenB.push_back(b[i]);
        }
        sort(oddA.begin(),oddA.end());
        sort(evenA.begin(),evenA.end());
        sort(oddB.begin(),oddB.end());
        sort(evenB.begin(),evenB.end());
        if(oddA.size()!=oddB.size() || evenA.size()!=evenB.size())return -1;
        long long int pos=0;
        long long int neg=0;
        for(int i=0;i<oddA.size();i++){
            if(oddA[i]>=oddB[i]){
                pos+=oddA[i]-oddB[i];
            }
            else neg+=oddB[i]-oddA[i];
        }
          for(int i=0;i<evenA.size();i++){
            if(evenA[i]>=evenB[i]){
                pos+=evenA[i]-evenB[i];
            }
            else neg+=evenB[i]-evenA[i];
        }
        if(pos!=neg)return -1;
        if(pos%2!=0)return -1;
        return pos/2;
        
        
        
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        vector<int> A(N);
        Array::input(A,N);
        
        
        vector<int> B(N);
        Array::input(B,N);
        
        Solution obj;
        long long res = obj.solve(N, A, B);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends