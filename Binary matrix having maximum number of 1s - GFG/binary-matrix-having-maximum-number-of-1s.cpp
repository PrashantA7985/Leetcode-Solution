//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    vector<int> findMaxRow(vector<vector<int>> v, int n) {
        //code here
        vector<int>ans;
        int index=0;
        int count=0;
        for(int i=0;i<n;i++){
            int x=lower_bound(v[i].begin(),v[i].end(),1)-v[i].begin();
            if(x!=n){
                if(n-x>count){
                    index=i;
                    count=n-x;
                }
            }
        }
        ans.push_back(index);
        ans.push_back(count);
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
	int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<vector<int>> arr(n, vector<int> (n));
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                cin >> arr[i][j];
        Solution obj;
        vector<int> ans = obj.findMaxRow(arr, n);
        for(int val : ans) {
            cout << val << " ";
        }
        cout << endl;
    }
}
// } Driver Code Ends