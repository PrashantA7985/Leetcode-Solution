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
    bool isPalindrome(ListNode* head) {
         ListNode* slow=head;
        ListNode* fast=head;
          while(fast->next!=NULL && fast->next->next!=NULL){
              slow=slow->next;
              fast=fast->next->next;
          }
        
      
        ListNode *prev=NULL;
        ListNode *p=slow;
        
        slow=slow->next;
        p->next=NULL;
      
        while(slow!=NULL){
           ListNode * node=slow->next;
            slow->next=prev;
            prev=slow;
            slow=node;
            
        }
        while(head!=NULL  && prev!=NULL){
          if(head->val!=prev->val)return false;
            head=head->next;
            prev=prev->next;
        }
      
        return true;
        
    }
};