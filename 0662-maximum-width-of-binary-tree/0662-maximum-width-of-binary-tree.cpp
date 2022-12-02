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
    int widthOfBinaryTree(TreeNode* root) {
            if(!root)return 0;
      queue<pair<TreeNode*,int>>q;
      q.push({root,0});
      int ans=1;
      while(!q.empty()){
          int size=q.size();
          
          int min=q.front().second;
          int first,last;
          int i=0;
          while(i<size){
              TreeNode* temp=q.front().first;
              int x=q.front().second-min;
              q.pop();
              if(i==0)first=x;
              if(i==size-1)last=x;
              if(temp->left!=NULL)q.push({temp->left,2*1LL*x+1});
                if(temp->right!=NULL)q.push({temp->right,2*1LL*x+2});
               
              i++;
          }
            ans=max(ans,last-first+1);
      }
      return ans;
    }
};