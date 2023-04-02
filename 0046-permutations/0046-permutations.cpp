class Solution {
    void solve(int n,vector<int>& nums,vector<vector<int>>& ans,vector<int>&m,vector<int>& ds){
if(ds.size()==n){
ans.push_back(ds);
return ;
}
    for(int i=0;i<n;i++){
        if(m[i]==0){
            ds.push_back(nums[i]);
            m[i]=1;
            solve(n,nums,ans,m,ds);
            m[i]=0;
            ds.pop_back();
        }
    }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>ans;
        vector<int>m(n,0);
        vector<int>ds;
        solve(n,nums,ans,m,ds);
        return ans;
    }
};