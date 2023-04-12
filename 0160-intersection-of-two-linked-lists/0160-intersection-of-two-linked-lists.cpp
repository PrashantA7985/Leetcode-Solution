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
    ListNode *getIntersectionNode(ListNode *h1, ListNode *h2) {
            ListNode *d1=h1;
            ListNode * d2=h2;
            int c1=0;
        int c2=0;
             while(d1){
                 c1++;
                 d1=d1->next;
             }
                while(d2){
                 c2++;
                 d2=d2->next;
             }
        if(c1>=c2){
            int x=c1-c2;
            d1=h1;
            for(int i=0;i<x;i++){
                d1=d1->next;
            }
            d2=h2;
            while(d1!=NULL && d2!=NULL){
                 if(d1==d2)return d1;
                d1=d1->next;
                d2=d2->next;
            }
        }
            else{
                int x=c2-c1;
            d2=h2;
            for(int i=0;i<x;i++){
                d2=d2->next;
            }
            d1=h1;
            while(d2!=NULL && d1!=NULL){
                 if(d1==d2)return d1;
                d1=d1->next;
                d2=d2->next;
            } 
            }
          
        return NULL;
    }
};