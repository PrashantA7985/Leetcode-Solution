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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
             vector<vector<int>>v;
            queue<TreeNode*>q;
             if(root==NULL)return v;
        q.push(root);
        int i=0;
        while(1){
            int size=q.size();
            if(size==0)return v;
            vector<int>arr;
            while(size--){
                 TreeNode* temp=q.front();
                q.pop();
                arr.push_back(temp->val);
                if(temp->left)q.push(temp->left);
                if(temp->right)q.push(temp->right);
                
                 
            }
            if(i&1)reverse(arr.begin(),arr.end());
            v.push_back(arr);
            i++;
        }
        return v;
        
    }
};