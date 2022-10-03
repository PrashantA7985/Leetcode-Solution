class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& v) {
        vector<vector<int>>ans;
        if(v.size()==0)return ans;
        vector<int>data;
        sort(v.begin(),v.end());
        int flag=0;
        data.push_back(v[0][0]);
        int it=v[0][1];
        for(int i=1;i<v.size();i++){
            if(it>=v[i][0]){
               it=max(it,v[i][1]);
               
            }
            else{
                data.push_back(it);
                it=v[i][1];
                
                ans.push_back(data);
                data.clear();
                data.push_back(v[i][0]);
               
            }
        }
      
            data.push_back(it);
            ans.push_back(data);
     
        return ans;
        
    }
};