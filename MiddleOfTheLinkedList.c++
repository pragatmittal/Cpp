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
            head=head-> next;
        }
        return count;

    }

    ListNode* middleNode(ListNode* head) {
        int len=length(head);
        int ans=len/2;
        int count=0;
        ListNode* temp=head;

        for(int count=0;count<ans;count++){

            temp=temp->next;

        }
        return temp;

    }
};