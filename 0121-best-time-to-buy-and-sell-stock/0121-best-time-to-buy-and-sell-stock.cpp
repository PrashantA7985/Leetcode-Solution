class Solution {
public:
    int maxProfit(vector<int>& v) {
        int n=v.size();
      int minval=INT_MAX;
        int ans=0;
        for(int i=0;i<n;i++){
            minval=min(minval,v[i]);
            ans=max(ans,v[i]-minval);
        }
        return ans;
        
    }
};