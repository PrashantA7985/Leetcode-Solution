class Solution {
public:
    void nextPermutation(vector<int>& v) {
        int index1=-1;
        int index2;
        int n=v.size();
        for(int i=n-2;i>=0;i--){
            if(v[i]<v[i+1]){
                index1=i;
                break;
            }
        }

        if(index1>=0){
      
        for(int i=n-1;i>=0;i--){
               if(v[index1]<v[i]){
                  index2=i;
                   break;
               }
         }
           
        swap(v[index1],v[index2]);
        reverse(v.begin()+(index1+1),v.end());
        
    }
        else{
            reverse(v.begin(),v.end());
        }
       
    }
        
    
        
};