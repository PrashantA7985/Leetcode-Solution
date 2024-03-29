/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
         ListNode *slow=head;
        ListNode * fast=head;
        ListNode* temp=head;
        if(head==NULL || head->next==NULL)return NULL;
         while(fast->next && fast->next->next){
              slow=slow->next;
             fast=fast->next->next;
             if(slow==fast){
                 while(temp!=slow){
                     temp=temp->next;
                     slow=slow->next;
                 }
                 return slow;
             }
            
         }
        return NULL;
    }
};