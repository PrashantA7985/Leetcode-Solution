class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        priority_queue<int>p,q;
        for(int i=0;i<g.size();i++)p.push(g[i]);
        for(int i=0;i<s.size();i++)q.push(s[i]);
        int ans=0;
        while(!q.empty() && !p.empty()){
                  while(!q.empty() && !p.empty()&& q.top()<p.top())p.pop();
                 if(!p.empty() && q.top()>=p.top()){
                     q.pop();
                     p.pop();
                     ans++;
                 }
        }
        return ans;
        
    }
};