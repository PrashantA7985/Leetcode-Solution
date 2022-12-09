//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};

// Utility function to create a new Tree Node
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    
    return temp;
}

// Function to Build Tree
Node* buildTree(string str)
{   
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
            return NULL;
    
    // Creating vector of strings from input 
    // string after spliting by space
    vector<string> ip;
    
    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);
        
    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));
        
    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);
        
    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {
            
        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();
            
        // Get the current node's value from the string
        string currVal = ip[i];
            
        // If the left child is not null
        if(currVal != "N") {
                
            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->left);
        }
            
        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];
            
        // If the right child is not null
        if(currVal != "N") {
                
            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }
    
    return root;
}


// } Driver Code Ends
/* A binary Tree node
struct Node
{
    int data;
    struct Node *left, *right;
};
*/

class Solution
{
private:
     void solve(Node*root,map<Node*,Node*> &m){
         if(root==NULL)return ;
         queue<Node*>q;
         q.push(root);
         while(!q.empty()){
             Node *temp=q.front();
             q.pop();
             if(temp->left){
                 m[temp->left]=temp;
                 q.push(temp->left);
             }
              if(temp->right){
                 m[temp->right]=temp;
                 q.push(temp->right);
             }
         }
         return ;
     }
     bool  fun(Node* root, int target,Node * &start){
         if(root==NULL)return false;
         if(root->data==target){
             start=root;
             return true;
         }
         if(fun(root->left,target,start)  || fun(root->right,target,start))return true;
         return false;
     }
     queue<Node*> chamak( Node * start,queue<Node*>q, int k, map<Node*,Node*>&m){
         if(start==NULL)return q;
          map<Node*,int>vis;
          
          q.push(start);
          vis[start]=1;
          int x=0;
          while(!q.empty()){
              if(x==k)return q;
              x++;
              int size=q.size();
              while(size--){
                 Node* temp=q.front();
                 q.pop();
                 if(temp->left && !vis[temp->left]){
                     vis[temp->left]=1;
                     q.push(temp->left);
                 }
                  if(temp->right && !vis[temp->right]){
                     vis[temp->right]=1;
                     q.push(temp->right);
                 }
                 if(m[temp] && !vis[m[temp]]){
                     vis[m[temp]]=1;
                     q.push(m[temp]);
                 }
              }
          }
          
     }

public:

    vector <int> KDistanceNodes(Node* root, int target , int k)
    {
        map<Node*,Node*>m;
        solve(root,m);
        vector<int>v;
        Node * start;
        bool p=fun(root,target, start);
        queue<Node*>q;
        q=chamak(start,q,k,m);
        while(!q.empty()){
            v.push_back(q.front()->data);
            q.pop();
        }
        sort(v.begin(),v.end());
        return v;
        
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    getchar();
    
    Solution x = Solution();
    
    while(t--)
    {
        string s;
        getline(cin,s);
        Node* head = buildTree(s);
        
        int target, k;
        cin>> target >> k;
        getchar();
        
        vector <int> res = x.KDistanceNodes(head, target, k);
        
        for( int i=0; i<res.size(); i++ )
            cout<< res[i] << " ";
        cout<<endl;
    }
    return 0;
}

// } Driver Code Ends