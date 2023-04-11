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
    ListNode* addTwoNumbers(ListNode* a, ListNode* b) {
      ListNode *ans=new ListNode();
        ListNode *temp=ans;
        int carry=0;
        while(a!=NULL || b!=NULL || carry!=0){
            int sum=0;
            if(a!=NULL){
                sum+=a->val;
                a=a->next;
            }
            if(b!=NULL){
                sum+=b->val;
                b=b->next;
            }
            sum+=carry;
            ListNode *p=new ListNode(sum%10);
            carry=sum/10;
            temp->next=p;
            temp=temp->next;
        }
        
       return ans->next; 
    }
};