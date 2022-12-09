/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    vector<vector<int>> solve(TreeNode* root,vector<int>&a, vector<vector<int>>&v){
        if(root==NULL)return v;
        a.push_back(root->val);
        solve(root->left,a,v);
        solve(root->right,a,v);
        if(root->left==NULL && root->right==NULL){
                 v.push_back(a);
        }
        a.pop_back();
        return v;
    }
public:
    int maxAncestorDiff(TreeNode* root) {
          vector<vector<int>>v;
        vector<int>a;
           v=solve(root,a,v);
           int ans=0;
          for(int i=0;i<v.size();i++){
              sort(v[i].begin(),v[i].end());
              int x=v[i].size()-1;
              ans=max(ans,v[i][x]-v[i][0]);
          }
        return ans;
    }
};