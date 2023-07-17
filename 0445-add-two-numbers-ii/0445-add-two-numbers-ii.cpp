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
    ListNode * reverse(ListNode *l){
       ListNode *temp=NULL;
        ListNode *p=l;
         while(l!=NULL){
            p=p->next;
            l->next=temp;
            temp=l;
            l=p;
        }
        return temp;
    }
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    l1=reverse(l1);
    l2=reverse(l2);
   
        ListNode *ans=new ListNode(0);
        ListNode *res=ans;
        int x=0;
        while(l1!=NULL and l2!=NULL){
            int d=l1->val+l2->val+x;
            x=d/10;
            d=d%10;
          ListNode * pemp=new ListNode(d);
            ans->next=pemp;
            ans=ans->next;
            l1=l1->next;
            l2=l2->next;
}
        while(l1!=NULL){
            int d=l1->val+x;
            x=d/10;
            d=d%10;
          ListNode * pemp=new ListNode(d);
            ans->next=pemp;
            ans=ans->next;
            l1=l1->next;
        }
         while(l2!=NULL){
            int d=l2->val+x;
            x=d/10;
            d=d%10;
          ListNode * pemp=new ListNode(d);
            ans->next=pemp;
            ans=ans->next;
            l2=l2->next;
        }
        if(x!=0){
             ListNode * pemp=new ListNode(x);
            ans->next=pemp;
            ans=ans->next;
        }
        return res=reverse(res->next);
        
    }
};