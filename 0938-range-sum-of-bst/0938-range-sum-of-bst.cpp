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
    vector<int>solve(TreeNode *root,vector<int>&v){
             if(root==NULL)return v;
            queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
             TreeNode* temp=q.front();
            q.pop();
             v.push_back(temp->val);
            if(temp->left!=NULL)q.push(temp->left);
           
             if(temp->right!=NULL)q.push(temp->right);
            
        }
        return v;
    }
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        
        vector<int>v;
       
        v=solve(root,v);
        sort(v.begin(),v.end());
        int z,y;
        for(int i=0;i<v.size();i++){
              if(v[i]==low){
                  z=i;
                  break;
              }
              
        }
         for(int i=0;i<v.size();i++){
              if(v[i]==high){
                  y=i;
                  break;
              }
              
        }
       
        int sum=0;
        for(int i=z;i<=y;i++){
            cout<<v[i]<<endl;
            sum+=v[i];
        }
        return sum;
    }
};