/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (head == NULL) 
            return NULL;

        Node* curr = head;

        // Step 1: Create new nodes and insert them between original nodes
        while (curr != NULL) {
            Node* newNode = new Node(curr->val);
            newNode->next = curr->next;
            curr->next = newNode;
            curr = newNode->next;
        }

        // Step 2: Assign the random pointers to the newly created nodes
        curr = head;
        while (curr != NULL) {
            if (curr->random != NULL) {
                curr->next->random = curr->random->next;
            }
            curr = curr->next->next;
        }

        // Step 3: Separate the original list from the copied list
       
       Node* newhead=head->next;
       Node* duplicates=head-> next;
       Node* original=head;

       while(original!=NULL){
        original->next=original->next->next;
        if(duplicates->next!=NULL){
            duplicates->next=duplicates->next->next;

        }
        original=original->next ;
        duplicates=duplicates->next;

       }
       return newhead;
    }
};
