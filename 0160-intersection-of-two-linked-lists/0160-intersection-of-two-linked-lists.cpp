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
    ListNode *getIntersectionNode(ListNode *head1, ListNode *head2) {
          map<ListNode*,int>m;
        while(head1!=NULL){
            m[head1]++;
            head1=head1->next;
        }
        while(head2!=NULL){
            if(m.find(head2)!=m.end())return head2;
            head2=head2->next;
        }
        return NULL;
    }
};