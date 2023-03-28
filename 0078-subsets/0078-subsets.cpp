class Solution {
    vector<vector<int>> solve(int i,vector<int>&s, int n,vector<vector<int>>&v,vector<int>&a){
        if(i==n){
            
            v.push_back(a);
            return v;
        }
        a.push_back(s[i]);
        solve(i+1,s,n,v,a);
        
        a.pop_back();
         solve(i+1,s,n,v,a);
        return v;
        
    }
public:
    vector<vector<int>> subsets(vector<int>& s) {
       		    int n=s.size();
        vector<int>a;
		    vector<vector<int>>v;
		  v= solve(0,s,n,v,a);
        sort(v.begin(),v.end());
		    return v; 
    }
};