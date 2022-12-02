class Solution {
public:
    bool closeStrings(string s, string t) {
        if(s.size()!=t.size())return false;
        
        map<char,int>m,p;
        for(int i=0;i<s.size();i++){
          m[s[i]]++;
              p[t[i]]++;
        }
        vector<int>a,b;
        for(int i=0;i<s.size();i++){
            if(m[t[i]]==0)return false;
        }
        for(auto x:m)a.push_back(x.second);
        for(auto x:p)b.push_back(x.second);
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        return a==b;
    }
};