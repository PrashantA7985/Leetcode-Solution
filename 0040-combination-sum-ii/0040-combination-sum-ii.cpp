class Solution {
    
    void solve(int i,vector<int>&a,int n, int target, vector<vector<int>>&ans, vector<int>&ds){
        
            if(target==0){
                ans.push_back(ds);
     
            return;
            }
        
      for(int j=i;j<n;j++){
          if(j>i && a[j]==a[j-1])continue;
          if(target<a[j])break;
          ds.push_back(a[j]);
          solve(j+1,a,n,target-a[j],ans,ds);
          ds.pop_back();
      }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& a, int target) {
      
      
   sort(a.begin(),a.end());
        vector<vector<int>>ans;
        vector<int>ds;
        int n=a.size();
         solve(0,a,n,target,ans,ds);
         
        return ans;
        
    }
};