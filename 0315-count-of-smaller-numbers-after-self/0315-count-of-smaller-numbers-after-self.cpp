    #include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
  
// #define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
//   using namespace __gnu_pbds; 
typedef tree<int, null_type, less_equal<int>,
             rb_tree_tag,
             tree_order_statistics_node_update>
    ordered_set;

class Solution {

public:
    vector<int> countSmaller(vector<int>& nums) {
        
            vector<int>ans;
         ordered_set s;
           int n=nums.size();
        s.insert(nums[n-1]);
        ans.push_back(0);
        for(int i=n-2;i>=0;i--){
            s.insert(nums[i]);
           int x=s.order_of_key(nums[i]);
            ans.push_back(x);
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};