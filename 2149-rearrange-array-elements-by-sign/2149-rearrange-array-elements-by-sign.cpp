class Solution {
public:
    vector<int> rearrangeArray(vector<int>& v) {
     vector<int>a,b,ans;
       int i=0;
        int j=0;
        int n=v.size();
        while(i<n || j<n){
            while(i<n && v[i]<0)i++;
            while(j<n && v[j]>=0)j++;
          if(i!=n)  ans.push_back(v[i]);
           if(j!=n) ans.push_back(v[j]);
            i++;
            j++;
        }
        return ans;
    }
};