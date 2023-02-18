    #include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
  
 
typedef tree<long long int, null_type, less_equal<long long int>,
             rb_tree_tag,
             tree_order_statistics_node_update>
    ordered_set;
class Solution {
public:
    int reversePairs(vector<int>& v) {
        ordered_set s;
        int n=v.size();
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