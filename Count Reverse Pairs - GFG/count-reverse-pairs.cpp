//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// } Driver Code Ends
// User function Template for C++

    #include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
  
 
typedef tree<long long int, null_type, less_equal<long long int>,
             rb_tree_tag,
             tree_order_statistics_node_update>
    ordered_set;
class Solution {
  public:
    int countRevPairs(int n, vector<int> v) {
        // Code here
           ordered_set s;
        
        int sum=0;
        for(int i=n-1;i>=0;i--){
            if(s.size()>0){
                int x=s.order_of_key(v[i]);
              
                sum+=x;
            }
               s.insert(2*1LL*v[i]);
              
        }
        return sum;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr;

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            arr.push_back(x);
        }

        Solution obj;
        cout << obj.countRevPairs(n, arr) << endl;
    }
    return 0;
}
// } Driver Code Ends