class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        string ans;
        if(s.size()==1)return s[0];
        for(int i=0;i<s.size()-1;i++){
            string r=s[i];
            string p=s[i+1];
            int x=r.size();
            int y=p.size();
            int j=0;
            ans="";
            while(x>0 && y>0){
                if(r[j]==p[j])ans.push_back(r[j]);
                else break;
                x--;
                y--;
                j++;
            }
            s[i+1]=ans;
            if(ans.size()==0)return ans;
        }
        return ans;
    }
};