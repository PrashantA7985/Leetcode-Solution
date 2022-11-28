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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
          vector<vector<int>>ans;
    map<int,map<int,multiset<int>>>m;
        queue<pair<TreeNode*,pair<int,int>>>q;
        if(root==NULL)return ans;
        q.push({root,{0,0}});
        while(!q.empty()){
            TreeNode* temp=q.front().first;
            int x=q.front().second.first;
             int y=q.front().second.second;
            q.pop();
            m[x][y].insert(temp->val);
            if(temp->left)(q.push({temp->left,{x-1,y+1}}));
            if(temp->right)(q.push({temp->right,{x+1,y+1}}));
            
        }
        for(auto z:m){
            vector<int>data;
        for ( auto itr : z.second){
           for(auto i=itr.second.begin();i!=itr.second.end();i++){
               // cout<<z.first<<" ";
               // cout<<itr.first<<" ";
               // cout<<*i<<endl;
               data.push_back(*i);
           }
    }
            ans.push_back(data);
        }
        return ans;
    }
    
};