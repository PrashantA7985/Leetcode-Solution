class Solution {
    // private:
    // void bfs(int i,int j,int vis[],vector<pair<int,int>>& list[],int m){
    //     vis[i]=1;
    //    m=min(list[i][j].second,m);
    //     for(int i=0;i<)
    //     while(!q.empty()){
    //         int temp=q.front();
    //         q.pop();
    //         for(int x=0;x<list[temp].size();x++){
    //             if(vis[x]==0){
    //                 vis[x]=1;
    //                 q.push(list[x].first)
    //                     m=min(m,list[x].second);
    //             }
    //         }
    //     }
    // }
public:
    int minScore(int n, vector<vector<int>>& v) {
      
        vector<pair<int,int>>list[n+2];
           for(int i=0;i<v.size();i++){
               int x=v[i][0];
               int y=v[i][1];
               int w=v[i][2];
               list[x].push_back({y,w});
               list[y].push_back({x,w});
           }
        // for(int i=0;i<n+1;i++){
        //     for(int j=0;j<list[i].size();j++){
        //         cout<<i<<" "<<list[i][j].first<<" "<<list[i][j].second<<endl;
        //     }
        // }
        for(int i=0;i<n+1;i++){
            sort(list[i].begin(),list[i].end());
        }
        vector<int>vis(n+1,0);
        int m=INT_MAX;
        // bfs(1,0,vis,list,min);
        
        
        
         vis[1]=1;
        queue<int>q;
        q.push(1);
        while(!q.empty()){
        
            int temp=q.front();
          
            q.pop();
            for(int x=0;x<list[temp].size();x++){
                m=min(m,list[temp][x].second);
                if(!vis[list[temp][x].first]){
                    vis[list[temp][x].first]=1;
                    q.push(list[temp][x].first);
                      
                }
            }
        }
        
        
        
        return m;
        
    }
};