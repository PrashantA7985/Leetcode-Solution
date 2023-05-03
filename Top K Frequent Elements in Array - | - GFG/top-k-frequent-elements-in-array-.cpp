//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    // bool cmp(pair<int,int>a,pair<int,int>b){
    //     if(a.second==b.second){
    //         return a.first<b.first;
    //     }
    //     else return a.second<b.second;
    // }
  public:
    vector<int> topK(vector<int>& v, int k) {
        // Code here

        map<int,int>m;
        for(int i=0;i<v.size();i++){
            m[v[i]]++;
        }
        vector<int>ans;
        priority_queue<pair<int,int>, vector<pair<int,int>>,greater<pair<int,int>>>q;
        
        for(auto it:m){
            q.push({it.second,it.first});
            if(q.size()>k)q.pop();
        }
        while(!q.empty()){
            ans.push_back(q.top().second);
            q.pop();
        }
        reverse(ans.begin(),ans.end());
      
   
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (auto &i : nums) cin >> i;
        int k;
        cin >> k;
        Solution obj;
        vector<int> ans = obj.topK(nums, k);
        for (auto i : ans) cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends