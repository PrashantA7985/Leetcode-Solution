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
        string s=to_string(x);
     string res;
        for(int i=s.size()-1;i>=0;i--)res.push_back(s[i]);
       long long data=stoll(res);
        if(data<=num && flag==1){
            int temp=stoi(res);
          
            return (-1)*temp;
        }
     
        else  if(data<=num && flag==0)return stoi(res);
           
        return 0;
    }
};