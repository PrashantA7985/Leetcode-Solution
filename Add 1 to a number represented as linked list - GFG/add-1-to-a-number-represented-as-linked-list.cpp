//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data; 
        node = node->next; 
    }  
    cout<<"\n";
} 


// } Driver Code Ends
//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    Node* addOne(Node *head) 
    {
        if(head==NULL)return head;
       Node * prev=NULL;
   
       Node *temp=head;
       while(temp){
          Node *  nextN=temp->next;
          temp->next=prev;
          prev=temp;
          temp=nextN;
          
       }
       temp=prev;
       int carry=1;
       Node *p;
       while(prev!=NULL){
           int sum=prev->data+carry;
           prev->data=sum%10;
           carry=sum/10;
           p=prev;
           prev=prev->next;
       }
       if(carry!=0){
           Node *nya=new Node(carry);
           p->next=nya;
           
       }
       
        prev=NULL;
        while(temp){
          Node *  nextN=temp->next;
          temp->next=prev;
          prev=temp;
          temp=nextN;
         
    }
    return prev;
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 

// } Driver Code Ends