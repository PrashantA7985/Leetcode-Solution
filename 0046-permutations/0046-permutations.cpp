class Solution {
    void solve(int index,vector<int>& nums,vector<vector<int>>& ans){
       if(index==nums.size())ans.push_back(nums);
    for(int i=index;i<nums.size();i++){
      swap(nums[i],nums[index]);
        solve(index+1,nums,ans);
        swap(nums[i],nums[index]);
     
        
    }
       
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>ans;
      
        vector<int>ds;
        solve(0,nums,ans);
        return ans;
    }
};