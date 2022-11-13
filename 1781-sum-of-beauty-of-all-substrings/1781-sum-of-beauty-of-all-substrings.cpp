class Solution {
public:
    
   
    int beautySum(string s) {
        int ans=0;
        for(int i=0;i<s.size();i++){
              vector<int>m(26);
            for(int k=0;k<26;k++)m[k]=0;
             
                int x=0;
            for(int j=i;j<s.size();j++){
              m[int(s[j]-'a')]++;
             int y=INT_MAX;
                int flag=0;
              x=max(m[int(s[j]-'a')],x);
                for(int k=0;k<26;k++){
                    if(m[k]!=0){
                        y=min(m[k],y);
                      
                    }
                }
             
                
        
            
                if(x>y && y>0)ans+=x-y;
            }
        
        }
        return ans;
    }
};