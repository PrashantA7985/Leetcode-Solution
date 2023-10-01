class Solution {
public:
    string reverseWords(string s) {
        string ans;
        string r;
        for(int i=0;i<s.size();i++){
            if(s[i]!=' '){
                r.push_back(s[i]);
            }
            else{
                reverse(r.begin(),r.end());
                ans+=r;
                ans.push_back(' ');
                r="";
            }
        }
        reverse(r.begin(),r.end());
        ans+=r;
        return ans;
    }
};