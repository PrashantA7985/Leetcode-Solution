class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& v) {
         vector<vector<string>>ans;
        vector<pair<string,string>>p;
        for(int i=0;i<v.size();i++){
               string s=v[i];
            sort(s.begin(),s.end());
            p.push_back({s,v[i]});
        }
        sort(p.begin(),p.end());
        vector<string>temp;
        temp.push_back(p[0].second);
        for(int i=1;i<p.size();i++){
            if(p[i].first==p[i-1].first)temp.push_back(p[i].second);
            else{
                 ans.push_back(temp);
                temp.clear();
                temp.push_back(p[i].second);
            }
        }
        if(temp.size()!=0)ans.push_back(temp);
        return ans;
    }
};