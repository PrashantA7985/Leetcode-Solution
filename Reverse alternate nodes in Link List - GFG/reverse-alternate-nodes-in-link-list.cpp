//{ Driver Code Starts
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
/* A linked list node */


struct Node
{
    int data;
    struct Node *next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

struct Node *start = NULL;

/* Function to print nodes in a given linked list */
void printList(struct Node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
    
}

void insert()
{
    int n,value;
    cin>>n;
    struct Node *temp;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        if(i==0)
        {
            start = new Node(value);
            temp = start;
            continue;
        }
        else
        {
            temp->next = new Node(value);
            temp = temp->next;
        }
    }
}


// } Driver Code Ends
/*
  reverse alternate nodes and append at the end
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
      int data;
      struct Node *next;
    
      Node(int x){
        data = x;
        next = NULL;
      }
    
   };

*/
class Solution
{
    public:
    Node* solve (Node * root){
        if(root==NULL)return root;
        Node *pre=NULL;
        Node *curr=root;
        while(curr!=NULL){
           
            Node * aage=curr->next;
            curr->next=pre;
            pre=curr;
            curr=aage;
            
        }
        return pre;
    }
    void rearrange(struct Node *odd)
    {
        //add code here
        Node *temp=odd;
        Node * a=new Node(0);
        Node *b=new Node(1);
        Node *c=a;
        Node *d=b;
        int i=0;
        while(temp!=NULL){
            if(i%2==0){
               a->next=temp;
               a=a->next;
               
            }
            else{
              b->next=temp;  
              b=b->next;
            }
            temp=temp->next;
          
            i++;
        }
        a->next=NULL;
        b->next=NULL;
        odd=c->next;
        while(c->next!=NULL)c=c->next;
        d=d->next;
        d=solve(d);
        c->next=d;
        
    }
};



//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while (t--) {
        insert();
        Solution ob;
        ob.rearrange(start);
        printList(start);
    }
    return 0;
}

// } Driver Code Ends