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
    ListNode* deleteMiddle(ListNode* head) {
        int count=0;
        ListNode* temp=head;
        ListNode* y=head;
          
        while(head!=NULL){
            head=head->next;
             count++;      
        }
        if(count==1)return  NULL; 
       int x=count/2;
      
        int i=0;
        while(i<x-1){
            temp=temp->next;
            i++;
        }

     
        temp->next=temp->next->next;
  
  
    return y;
    }
};