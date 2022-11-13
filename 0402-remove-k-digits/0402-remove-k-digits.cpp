class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char>st;

        st.push(num[0]);
        int x=0;
        for(int i=1;i<num.size();i++){
            while(x<k &&!st.empty() && st.top()>num[i]){
                st.pop();
                x++;
                // st.push(num[i]);
            }
           st.push(num[i]);
                
        }
        string ans;
        while(!st.empty()){
             ans.push_back(st.top());
              st.pop();
        }
        
        string s;
        int flag=0;
        for(int i=ans.size()-1;i>=0;i--){
            if(ans[i]=='0' && flag==0){}
            else {
                s.push_back(ans[i]);
                flag=1;
            }
        }
        string temp;
        for(int i=s.size()-1;i>=0;i--){
            if(x<k)x++;
            else {
                temp.push_back(s[i]);
            }
        }
       reverse(temp.begin(),temp.end());
        if(temp.size()==0)temp.push_back('0');
        return temp;
    }
};