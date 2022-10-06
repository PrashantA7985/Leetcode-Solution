class Solution {
public:
    int maxProduct(vector<int>& v) {
       int left=v[0];
        int right=v[v.size()-1];
        int x=1;
        int y=1;
        int flag=0;
        for(int i=0;i<v.size();i++){
             if(v[i]!=0)x=x*v[i];
             else {
                 flag=1;
                 x=1;
                 continue;
             }  
            left=max(left,x);
            
        }
           for(int i=v.size()-1;i>=0;i--){
             if(v[i]!=0)y=y*v[i];
             else {
                 flag=1;
                 y=1;
                 continue;
             }  
            right=max(right,y);
            
        }
        if(flag==1)return max({left,right,0});
        return max(left,right);
        
    }
};