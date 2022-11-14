class Solution {
public:
    string reverseWords(string s) {
     string ans,r;
      stack<char>st;
        for(int i=0;i<s.size();i++){
              if(st.empty() && s[i]==' ')continue;
               st.push(s[i]);
        }
       
        while(!st.empty()){
             if(ans.size()==0 && st.top()==' '){}
            else if(ans.back()==' ' && st.top()==' '){}
              else  ans.push_back(st.top());
            st.pop();
            
        }
     s=ans;
        ans="";
        for(int i=0;i<s.size();i++){
             if(s[i]==' '){
                  reverse(r.begin(),r.end());
                 ans+=r;
                 ans.push_back(' ');
                 r="";
             }
            else r.push_back(s[i]);
        }
        reverse(r.begin(),r.end());
        ans+=r;
        return ans;
     
        
    }
};