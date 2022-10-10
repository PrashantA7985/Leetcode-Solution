class Solution {
public:
    int removeDuplicates(vector<int>& a) {
          int n=a.size();
          int ans=1;
          int x=a[0];
          int j=1;
          for(int i=1;i<n;i++){
              if(x==a[i]){
                  while(i<n && x==a[i])i++;
                  i--;
              }
              else {
                  ans++;
                  a[j]=a[i];
                  j++;
                  x=a[i];
              }
          }
        return ans;
    }
};