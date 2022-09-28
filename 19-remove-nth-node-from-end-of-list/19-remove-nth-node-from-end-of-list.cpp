/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int count=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        int x=count-n;
      
        temp=head;
        ListNode* p=head;
        while(x--){
            p=temp;
            temp=temp->next;
        }
       if(p==head && temp==head){
           head=temp->next;
           
           temp=NULL;
       }
        else{
           p->next=temp->next;
            temp=NULL;
        }
         
      
     return head;
    }
};