class Solution {
public:
    string reverseWords(string s) {
     string ans;
        string r;
        for(int i=s.size()-1;i>=0;i--){
                if(s[i]!=' ')r.push_back(s[i]);
                else {
                    reverse(r.begin(),r.end());
                    ans+=r;
                    if(ans.size()!=0 && ans.back()!=' ')
                    ans.push_back(' ');
                    r="";
                }
        }
      
        reverse(r.begin(),r.end());
        
        ans+=r;
            string res;
            int flag=0;
            for(int i=ans.size()-1;i>=0;i--){
                if(ans[i]==' ' && flag==0){}
                else{
                    res.push_back(ans[i]);
                    flag=1;
                }
            
        }
            reverse(res.begin(),res.end());
        return res;
        
    }
};