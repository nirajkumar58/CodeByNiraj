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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
            if(left==right) return head;
            ListNode * node1=NULL; 
            ListNode * node2=NULL;
            ListNode * l=head; 
            ListNode * r=head; 
            for(int i=2;i<=right;i++){
                 if(i<=left) {
                    node1=l;
                    l=l->next;
                 }
                 r=r->next;
            }
            node2=r->next;
            ListNode * ld=l;
            ListNode * prev=ld;
            ld=ld->next;

             for(int i=0;i<right-left;i++){
                ListNode * next=ld->next;
                ld->next=prev;
                prev=ld;
                ld=next;
             }
            ListNode *temp=l;
            if(node1) node1->next=r;
            temp->next=node2;

            if(left==1) return r;
            
            return head;
    }
};