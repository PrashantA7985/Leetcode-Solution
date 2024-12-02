class Solution {
public:
    int isPrefixOfWord(string s, string r) {
        vector<string>v;
        string p;
        for(int i=0;i<s.size();i++){
                   if(s[i]==' '){
                    v.push_back(p);
                    p="";
                   }
                   else p.push_back(s[i]);
        }
        if(p.size()!=0)v.push_back(p);
        for(int i=0;i<v.size();i++){
            if(v[i].substr(0,r.size())==r)return i+1;
        }
        return -1;
    }
};