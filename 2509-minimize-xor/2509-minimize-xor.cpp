class Solution {
public:
    int minimizeXor(int num1, int num2) {
           int count=__builtin_popcount(num2);
           cout<<count<<endl;
        //    int x=__builtin_popcount(num1);
          
           string s;
          string r;
          
          while(num1>0){
            if(num1%2!=0)s.push_back('1');
            else s.push_back('0');
            num1/=2;
          }
          for(int i=0;i<s.size();i++)r.push_back('0');
          cout<<s<<endl;
          reverse(s.begin(),s.end());
          for(int i=0;i<s.size();i++){
            if(s[i]=='1' && count>0){
                r[i]='1';
                count--;
                if(count==0)break;
            }
           
           
            
          }
           reverse(r.begin(),r.end());
          for(int i=0;i<r.size();i++){
            if(r[i]=='0' && count>0){
                r[i]='1';
                count--;
            }
          }
         
          while(count>0){
            r.push_back('1');
            count--;
          }
        //   cout<<r<<endl;
           int k=1;
           int ans=0;
           for(int i=0;i<r.size();i++){
            if(r[i]=='1'){
                ans+=k;
            }
            k=k*2;

           }
           return ans;
    }
};