class Solution {
public:
    bool rotateString(string s1, string s2) {
        for( int i=0;i<s1.size();i++){
          if(s2[0]==s1[i]){
           string r=s1.substr(i,s1.size()-i);
           string p=s1.substr(0,i);
              r+=p;
            
              if(r==s2)return true;
          }
      }
    
      return false; 
    }
};