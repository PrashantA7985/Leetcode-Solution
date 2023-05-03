class Solution {
public:
    vector<int> topKFrequent(vector<int>& v, int k) {
        map<int,int>m;
        for(int i=0;i<v.size();i++){
            m[v[i]]++;
        }
        vector<int>ans;
        priority_queue<pair<int,int>, vector<pair<int,int>>,greater<pair<int,int>>>q;
        
        for(auto it:m){
            q.push({it.second,it.first});
            if(q.size()>k)q.pop();
        }
        while(!q.empty()){
            ans.push_back(q.top().second);
            q.pop();
        }
        reverse(ans.begin(),ans.end());
      
   
        return ans;
        
    }
};