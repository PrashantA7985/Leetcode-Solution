//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
    void solve(int i,int n,vector<int>&v,int target,
    vector<vector<int>>&ans,vector<int>&ds){
        if(target==0){
            ans.push_back(ds);
            return ;
        }
        for(int j=i;j<n;j++){
            if(j>i && v[j-1]==v[j])continue;
            if(target<v[j])break;
            ds.push_back(v[j]);
            solve(j+1,n,v,target-v[j],ans,ds);
            ds.pop_back();
        }
     
    }
  public:
    vector<vector<int>> combinationSum2(vector<int> &v, int target) {
        // Write your code here
        sort(v.begin(),v.end());
        int n=v.size();
        vector<vector<int>>ans;
        vector<int>ds;
        solve(0,n,v,target,ans,ds);
        return ans;
    }
};

//{ Driver Code Starts.
int main() {

    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> candidates(n);
        for (int i = 0; i < n; ++i) {
            cin >> candidates[i];
        }
        // char marker;
        // cin >> marker;

        Solution obj;

        vector<vector<int>> comb = obj.combinationSum2(candidates, k);
        sort(comb.begin(), comb.end());
        cout << "[ ";
        for (int i = 0; i < comb.size(); i++) {
            cout << "[ ";
            for (int j = 0; j < comb[i].size(); j++) {
                cout << comb[i][j] << " ";
            }
            cout << "]";
        }
        cout << " ]\n";

        // cout << "\n~\n";
    }
    fclose(stdout);
    return 0;
}

// } Driver Code Ends