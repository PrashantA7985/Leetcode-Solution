class Solution {
public:
    string pushDominoes(string s) {
      string t,r,ans;
        t.push_back('L');
        for(int i=0;i<s.size();i++)t.push_back(s[i]);
        t.push_back('R');
        vector<pair<char,int>>p;
        for(int i=0;i<t.size();i++){
            if(t[i]!='.')p.push_back({t[i],i});
        }
        for(auto x:p)cout<<x.first<<" "<<x.second<<" ";
       
        for(int i=0;i<p.size()-1;i++){
            if(p[i].first=='L' && p[i+1].first=='L'){
                int x=(p[i+1].second)-(p[i].second)-1;
                r.append(x,'L');
                r.push_back('L');
            }
            else  if(p[i].first=='R' && p[i+1].first=='R'){
                int x=(p[i+1].second)-(p[i].second)-1;
                r.append(x,'R');
                r.push_back('R');
            }
            else  if(p[i].first=='L' && p[i+1].first=='R'){
                  int x=(p[i+1].second)-(p[i].second)-1;
                r.append(x,'.');
                r.push_back('R');
            }
            else{
                int x=(p[i+1].second)-(p[i].second)-1;
                if(x%2==0){
                    r.append(x/2,'R');
                    r.append(x/2,'L');
                    r.push_back('L');
                }
                else{
                       r.append(x/2,'R');
                    r.push_back('.');
                    r.append(x/2,'L');
                    r.push_back('L');
                }
            }
        }
        for(int i=0;i<r.size()-1;i++){
            ans.push_back(r[i]);
        }
        return ans;
       
    }
};