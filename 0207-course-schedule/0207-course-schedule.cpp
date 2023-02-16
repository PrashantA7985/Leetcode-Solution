class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& pre) {
          vector<int>adj[n];
        for(int i=0;i<pre.size();i++){
            adj[pre[i][1]].push_back(pre[i][0]);
            
        }
        	  vector<int>indegree(n);
	  for(int i=0;i<n;i++){
	      for(auto it:adj[i]){
	          indegree[it]++;
	      }
	  }
	  queue<int>q;
	  for(int i=0;i<n;i++){
	      if(indegree[i]==0)q.push(i);
	  }
	  vector<int>v;
	  while(!q.empty()){
	      int node=q.front();
	      v.push_back(node);
	      q.pop();
	      for(auto it:adj[node]){
	          indegree[it]--;
	          if(indegree[it]==0)q.push(it);
	      }
	  }
	  if(v.size()==n)return 1;
	  return 0;
    }
};