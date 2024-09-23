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
    int length(ListNode* head){
        int count=0;
        while(head!=NULL){
            count++;
            head=head->next;


        }
        return count;

    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL ||head->next==NULL|| k==0)
            return head;
        int len = length(head);
        k%=len ;
         if (k == 0) return head;
        ListNode* slow=head ;
        ListNode* fast=head ;
        for(int i=0;i< k;i++){
            fast=fast->next;

        }
        while(fast->next!=NULL){
            slow=slow->next;
            fast=fast->next;

        }
        ListNode* newhead=slow->next;
        slow->next=NULL;
        fast->next=head;
        return newhead;




    
    
    } 
};