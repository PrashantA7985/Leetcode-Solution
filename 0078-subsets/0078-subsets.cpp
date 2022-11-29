class Solution {
public:
    vector<vector<int>> subsets(vector<int>& s) {
       		    int n=s.size();
		    vector<vector<int>>v;
		    for(int i=0;i<(1<<n);i++){
		        vector<int>r;
		        for(int j=0;j<n;j++){
		            if(i&(1<<j))r.push_back(s[j]);
		        }
		        v.push_back(r);
		    }
		    sort(v.begin(),v.end());
		    return v; 
    }
};