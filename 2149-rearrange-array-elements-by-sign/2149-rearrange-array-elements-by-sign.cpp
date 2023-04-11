class Solution {
public:
    vector<int> rearrangeArray(vector<int>& v) {
     
       int i=0;
        int j=0;
        int n=v.size();
        vector<int>ans(n);
        int x=1;
        int y=0;
      for(int i=0;i<n;i++){
          if(v[i]<0){
             ans[x]=v[i];
              x+=2;
          }
          else if(v[i]>=0){
              ans[y]=v[i];
              y+=2;
          }
      }
        return ans;
    }
};