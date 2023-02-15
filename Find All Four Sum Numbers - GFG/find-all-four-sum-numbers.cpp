//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
               sort(arr.begin(),arr.end());
            int n=arr.size();
        vector<vector<int>>ans;
        for(int i=0;i<n;i++){
            if(i==0 || (i>0 && (arr[i]!=arr[i-1]))){
               
                for(int j=i+1;j<n;j++){
                    if(j==(i+1)  || (j>i+1 && (arr[j]!= arr[j-1]))){
                    
                        int l=j+1;
                        int h=n-1;
                     
                long long  int sum=1LL*k-1LL*(arr[i]+arr[j]);
                     
                        while(l<h){
                            long long res=arr[l]+arr[h];
                            if(res==sum){
                                vector<int>temp;
                                temp.push_back(arr[i]);
                                temp.push_back(arr[j]);
                                temp.push_back(arr[l]);
                                temp.push_back(arr[h]);
                                ans.push_back(temp);
                                while(l<h && arr[l]==arr[l+1])l++;
                                  while(l<h && arr[h]==arr[h-1])h--;
                                l++;
                                h--;
                            }
                            else if ( res<sum)l++;
                            else h--;
                        }
                    }
                }
             
                
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends