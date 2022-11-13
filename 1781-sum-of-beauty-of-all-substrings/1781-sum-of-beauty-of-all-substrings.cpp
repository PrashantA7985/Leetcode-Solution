class Solution {
public:
    
   
    int beautySum(string s) {
        int ans=0;
        for(int i=0;i<s.size();i++){
          map<char,int>m;
             
                int x=0;
            for(int j=i;j<s.size();j++){
              m[s[j]]++;
                x=max(x,m[s[j]]);
             int y=INT_MAX;
               for(auto it:m)y=min(y,it.second);
             
               
             
                
        
            
                if(x>y && y>0)ans+=x-y;
            }
        
        }
        return ans;
    }
};