class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& v) {
        int i=0;
        int n=v.size();
        int j=0;
      
        while(i<n && j<n){
           while(i<n && v[i]%2!=0){
               i++;
           }
            while(j<n && v[j]%2==0)j++;
          if(i<n && j<n && j<i) { swap(v[i],v[j]);
            i++;
            j++;
                                }
            else i++;
            
        }
        return v;
        
    }
};