class Solution {
     private:
    bool bfs(int start,vector<int>&color, vector<vector<int>>& adj){
        queue<int>q;
        q.push(start);
        color[start]=0;
       
        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(auto it:adj[node]){
               
             if(color[it]==color[node])return false;
              else  if(color[it]==-1){
                    color[it]=!color[node];
                    q.push(it);
                }
            }
        }
        return true;
    }
public:
    bool isBipartite(vector<vector<int>>& adj) {
        int n=adj.size();
      vector<int>color(n);
	    for(int i=0;i<n;i++)color[i]=-1;
	    for(int i=0;i<n;i++){
	        if(color[i]==-1){
	            if(bfs(i,color,adj)==false)return false;
	        }
	    }
	    return true;
    }
};