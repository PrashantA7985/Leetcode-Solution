class Solution {
public:
    long long countFairPairs(vector<int>& v, int low, int up) {
        sort(v.begin(),v.end());
        long long ans=0;
        for(int i=0;i<v.size()-1;i++){
                // if(low-v[i]>=0  && up-v[i]>=0){
             int x=lower_bound(v.begin()+i+1,v.end(),low-v[i])-v.begin();
               
          
             int y=upper_bound(v.begin()+i+1,v.end(),up-v[i])-v.begin();
               if(y==v.size())y--;
                    // cout<<x<<" "<<y<<endl;
            if(x==v.size())x--;
           
          if(v[x]+v[i]<low)x++;
            if(v[y]+v[i]>up)y--;
            ans+=y-x+1;
           
            
        }
        return ans;
        
    }
};