//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

long long numOfWays(int n, int m);

int main() {
    // code
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        cout << numOfWays(n, m) << endl;
    }
    return 0;
}
// } Driver Code Ends


//Function to find out the number of ways we can place a black and a 
//white Knight on this chessboard such that they cannot attack each other.
long long numOfWays(int n, int m)
{
    // write code here
     long long ans=0;
    long  long x=n*m;
  
         long p=1000000007;
           x=x%p;
        int a[]={-2,-2,-1,-1,1,1,2,2};
        int b[]={-1,1,-2,2,-2,2,-1,1};
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int count=0;
                for(int k=0;k<8;k++){
                    int row=i+a[k];
                    int col=j+b[k];
                    // cout<<row<<" "<<col<<endl;
                    if(row>=0 && row<n && col>=0 && col<m){
                        count++;
                    }
                    
                 }
                //  cout<<count<<endl;
                 ans=ans+(x-count-1);
                 ans=ans%p;
            }
        }
        return ans;
        
    
}