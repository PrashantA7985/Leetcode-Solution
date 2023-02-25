class Solution {
public:
    int maxProfit(vector<int>& v) {
        int n=v.size();
     vector<int>a(n);
      vector<int>b(n); 
        for(int i=0;i<n;i++){
            if(i==0){
                a[i]=v[i];
            }
            else a[i]=min(a[i-1],v[i]);
        }
           for(int i=n-1;i>=0;i--){
            if(i==n-1){
                b[i]=v[i];
            }
            else b[i]=max(a[i+1],v[i]);
        }
        int ans=0;
        for(int i=0;i<n;i++){
            ans=max(ans,b[i]-a[i]);
        }
        return ans;
        
    }
};