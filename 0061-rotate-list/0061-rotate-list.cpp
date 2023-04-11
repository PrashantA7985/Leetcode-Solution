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
    ListNode* rotateRight(ListNode* head, int k) {
         ListNode *temp=head;
        ListNode *last;
        int count=0;
         while(temp!=NULL){
             count++;
             last=temp;
             temp=temp->next;
         }
        if(count==0)return head;
        k=k%count;
        if(k==0)return head;
        int x=count-k;
        ListNode * start=new ListNode();
        start->next=head;
        temp=start;
        while(x--){
            temp=temp->next;
        }
        ListNode *p=temp;
        temp=temp->next;
        p->next=NULL;
        last->next=start->next;
        return  temp;
        
        
        
    }
};