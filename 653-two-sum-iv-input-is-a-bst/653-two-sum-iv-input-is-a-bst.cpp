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
public:
    
   
    void solve(TreeNode* root,vector<int>&v){
           if(root==NULL)return ;
           
              v.push_back(root->val);
             if(root->left!=NULL)solve(root->left,v);
             if(root->right!=NULL)solve(root->right,v);
        return ;
    }
    
    
    bool findTarget(TreeNode* root, int k) {
       vector<int>v;
        solve(root,v);
        map<int,int>m;
          for(auto x:v){
            if(m.find(k-x)!=m.end())return true;
              m[x]++;
        }
        return false;
        
        
    }
};