class Solution {
public:
    string breakPalindrome(string s) {
        string r;
        if(s.size()==1)return r;
        
        int flag=0;
        for(int i=0;i<s.size()/2;i++){
              if(s[i]>'a' && flag==0){
                  r.push_back('a');
                  flag=1;
              }
            else r.push_back(s[i]);
          
        }
       for(int i=s.size()/2;i<s.size();i++){
           r.push_back(s[i]);
       }
        if(r==s)r[s.size()-1]='b';
        return r;
    }
};