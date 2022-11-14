class Solution {
public:
    string largestGoodInteger(string s) {
        string ans="";
        for(int i=0;i<s.size();i++){
            map<char,int>m;
            if(i+3<=s.size()){
        for(int j=i;j<3+i;j++){
              m[s[j]]++; 
        }
            }
        if(m.size()==1){
            string r=s.substr(i,3);
            ans=max(ans,r);
        }
            }
        return ans;
    }
};