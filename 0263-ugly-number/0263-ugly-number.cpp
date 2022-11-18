class Solution {
public:
    bool isUgly(int n) {
        if(n<=0)return false;
        set<int>s;
        for(int i=2;i*1LL*i<=n;i++){
            while(n%i==0){
               s.insert(i);
                n=n/i;
            }
        }
        if(n>1)s.insert(n);
       
        for(auto x:s){
            if(x==2 || x==3 || x==5)continue;
          
                return false;
            
        }
        return true;
    }
};