//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}



// } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution
{
    public:
    Node *solve(Node *head){
        Node *prev=NULL;
        Node * curr=head;
        Node * nexts=head;
        while(curr!=NULL){
            nexts=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nexts;
        }
        return prev;
    }
    Node *compute(Node *head)
    {
        // your code goes 
        Node *temp=solve(head);
        int x=0;
        Node *ans=new Node(0);
        Node *p=ans;
        while(temp!=NULL){
            if(temp->data>=x){
                Node *q=new Node(temp->data);
                p->next=q;
                p=p->next;
                x=temp->data;
            }
            temp=temp->next;
        }
        return solve(ans->next);
    }
    
};
   


//{ Driver Code Starts.

int main()
{
    int T;
	cin>>T;

	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;

		for(int i=0;i<K;i++){
		    int data;
		    cin>>data;
			if(head==NULL)
			    head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}
        Solution ob;
        Node *result = ob.compute(head);
        print(result);
        cout<<endl;
    }
}

// } Driver Code Ends