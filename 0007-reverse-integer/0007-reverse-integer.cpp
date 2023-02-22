#include <vector>
class Solution {
public:
    int reverse(int x) {
       long long int num=2147483648 ;
     
        int flag=0;
        if(x<0){
           flag=1;
            x=abs(x);
        }
     
     long long int ans=0;
        while(x>0){
            ans=ans*10+x%10;
            x=x/10;
        }
        if(ans>num)return 0;
        if(flag==1)return -ans;
        return ans;
        
    }
};