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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
       queue<TreeNode*>q;
        if(depth==1){
            TreeNode* x=new TreeNode(val);
            TreeNode* y=root;
            root=x;
            root->left=y;
        }
        q.push(root);
        while(1){
            if(q.size()==0)return root;
            int size=q.size();
            depth--;
            if(depth==0)break;
            while(size!=0){
                TreeNode *temp=q.front();
                q.pop();
                if(depth==1){
                    if(temp->left){
                        TreeNode *x=new TreeNode(val);
                        TreeNode* y=temp->left;
                        temp->left=x;
                        x->left=y;
                        q.push(x);
                    }
                    else{
                          TreeNode *x=new TreeNode(val);
                        temp->left=x;
                        q.push(x);
                    }
                    
                                        if(temp->right){
                        TreeNode *x=new TreeNode(val);
                        TreeNode* y=temp->right;
                        temp->right=x;
                        x->right=y;
                        q.push(x);
                    }
                    else{
                          TreeNode *x=new TreeNode(val);
                        temp->right=x;
                        q.push(x);
                    }
                }
                else{
                    if(temp->left)q.push(temp->left);
                      if(temp->right)q.push(temp->right);
                }
                size--;
            }
        }
        return root;
    }
};