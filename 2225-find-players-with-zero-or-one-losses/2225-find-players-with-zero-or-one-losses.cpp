class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& v) {
        map<int,int>m,p,temp;
        for(int i=0;i<v.size();i++){
            m[v[i][0]]++;
          
            p[v[i][1]]--;
        }
         for(int i=0;i<v.size();i++){
            if(m.find(v[i][1])!=m.end())m.erase(v[i][1]);
        }
        vector<vector<int>>ans;
        vector<int>data;
       for(auto it:m)data.push_back(it.first);
        ans.push_back(data);
        data.clear();
         for(auto it:p){
            if(it.second==-1)data.push_back(it.first);
        }
        ans.push_back(data);
        return ans;
        
    }
};