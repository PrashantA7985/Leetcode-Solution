class Solution {
public:
    string removeOccurrences(string s, string part) {
        //    reverse(part.begin(),part.end());
           int k=part.size();
           int n=s.size();
           if(n<k)return s;
           stack<char>st;
           for(int i=0;i<k-1;i++){
                st.push(s[i]);
           }
         for(int i=k-1;i<s.size();i++){
                st.push(s[i]);
                string r;
                int t=k;
                while(t-- && !st.empty()){
                    r+=(st.top());
                    st.pop();
                }
                reverse(r.begin(),r.end());
                // cout<<r<<endl;
                if(r!=part){
                    for(int l=0;l<r.size();l++){
                        st.push(r[l]);
                    }
                }
              
         }  
         string ans;
         while(!st.empty()){
            ans+=(st.top());
            st.pop();
         }
         reverse(ans.begin(),ans.end());
         return ans;
    }
};