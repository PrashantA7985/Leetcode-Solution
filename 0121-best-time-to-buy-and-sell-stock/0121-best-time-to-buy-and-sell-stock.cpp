class Solution {
public:
    int maxProfit(vector<int>& v) {
        
        int minvalue=v[0];
        int ans=0;
        for(int i=1;i<v.size();i++){
           minvalue=min(minvalue,v[i]);
          
            ans=max(ans,v[i]-minvalue);
        }
        return ans;
        
    }
};