class Solution {
public:
    string largestOddNumber(string s) {
       
        for(int i=s.size()-1;i>=0;i--){
            int x=s[i]-'0';
            if(x&1)return s.substr(0,i+1);
        }
        return "";
    }
};