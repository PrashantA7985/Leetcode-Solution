class Solution {
public:
    int minReorder(int n, vector<vector<int>>& v) {
         int vis[n+1];
        for(int i=0;i<=n;i++)vis[i]=0;
         vector<vector<int>>adj(n+1);
        set<pair<int,int>>s;
        
        for(int i=0;i<v.size();i++){
            adj[v[i][0]].push_back(v[i][1]);
                adj[v[i][1]].push_back(v[i][0]);
                s.insert({v[i][0],v[i][1]});
        }
        //  for (auto c : v){
        //     adj[c[0]].push_back(c[1]);
        //     adj[c[1]].push_back(c[0]);
        //      s.insert({c[0],c[1]});
        // }
        queue<int>q;
        q.push(0);
        int ans=0;
        // vis[0]=1;
        while(!q.empty()){
              
             int temp=q.front();
              q.pop();
              vis[temp]=1;
              for(auto it:adj[temp]){
                  if(vis[it]==0)q.push(it);
                  if(vis[it]==0 && s.count({temp,it})){
                      // cout<<temp<<" "<<it<<endl;
                      // q.push(it);
                      ans++;
                    
                  }
              }
            
        }
        return ans;
        
    }
};