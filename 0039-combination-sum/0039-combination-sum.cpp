class Solution {
public:
    vector<vector<int>> solve(int i,int n,int k,vector<int>&v,
    vector<vector<int>>&ans,vector<int>&data){
        if(k<0)return ans;
        if(i==n){
            if(k==0){
                ans.push_back(data);
            }
            return ans;
        }
        int take=0;
        int notake=0;
        data.push_back(v[i]);
      solve(i,n,k-v[i],v,ans,data);
        data.pop_back();
        solve(i+1,n,k,v,ans,data);
        return ans;
    }
    vector<vector<int>> combinationSum(vector<int>& v, int k) {
        vector<vector<int>>ans;
        vector<int>data;
        int n=v.size();
        ans=solve(0,n,k,v,ans,data);
        return ans;
    }
};