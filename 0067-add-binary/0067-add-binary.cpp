class Solution {
public:
    string addBinary(string a, string b) {
        string ans;
        reverse(a.begin(),a.end());
         reverse(b.begin(),b.end());
        int x=min(a.size(),b.size());
             int carry=0;
        for(int i=0;i<x;i++){
              if(i==0){
                  carry=0;
              }
            if(a[i]=='0' && b[i]=='0' ){
                if(carry==0)ans.push_back('0');
                else {
                    ans.push_back('1');
                    carry=0;
                }
            }
            else  if((a[i]=='1' && b[i]=='0' )||(a[i]=='0' && b[i]=='1')){
                if(carry==0)ans.push_back('1');
                else {
                    ans.push_back('0');
                    carry=1;
                }
            }
                     else{
                         if(carry==1)ans.push_back('1');
                         else{
                             ans.push_back('0');
                             carry=1;
                         }
                     }
        }
        
        
   
     for(int i=x;i<a.size();i++){
         if(carry==1){
             if(a[i]=='0'){
                 ans.push_back('1');
                 carry=0;
             }
             else {
                  ans.push_back('0');
             }
         }
         else ans.push_back(a[i]);
     }
                     for(int i=x;i<b.size();i++){
         if(carry==1){
             if(b[i]=='0'){
                 ans.push_back('1');
                 carry=0;
             }
             else {
                  ans.push_back('0');
             }
         }
                           else ans.push_back(b[i]);
     }
                     if(carry==1)ans.push_back('1');
                     reverse(ans.begin(),ans.end());
                     return ans;
                     }
};