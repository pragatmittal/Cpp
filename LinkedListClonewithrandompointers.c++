#include<iostream>
#include<algorithm>
#include<unordered_map>

using namespace std;

// Assuming you have a Node structure defined somewhere in your code
struct Node {
    int data;
    Node* next;
    Node* random;
    
    Node(int d) : data(d), next(NULL), random(NULL) {}
};

class LinkedListClone {
private:
    // Function to insert a new node at the tail of a linked list
    void insertAtTail(Node*& head, Node*& tail, int data) {
        Node* newNode = new Node(data);//creating a new node
        if (head == NULL) {
            // If the list is empty, the new node becomes both head and tail
            head = newNode;
            tail = newNode;
            return;
        } else {
            // Otherwise, add the new node to the tail
            tail->next = newNode;//tail ke next me new ndoe krte jao or tail ko update krdo
            tail = newNode;
        }
    }

public:
    // Function to clone a linked list with random pointers
    Node* cloneList(Node* head) {
        // Step 1: Create a clone list
        Node* cloneHead = NULL;
        Node* cloneTail = NULL;

        Node* temp = head;// make a temperory node pointer assigning to the head .

        while (temp != NULL) { //jabtak temp null nhi hota 
            // Insert each node of the original list to the tail of the clone list
            insertAtTail(cloneHead, cloneTail, temp->data); //usme values append hoti jayengi 

            temp = temp->next;//or temp update hota jayega
        }

        // Step 2: Create a map to link original nodes to cloned nodes
        unordered_map<Node*, Node*> oldToNew;//we are making the map ,using the map  to clone the linked lists
        Node* originalNode = head;//this is used for transversing the original list
        Node* clonedNode = cloneHead;//this is used for transversing the cloned list

        while (originalNode != NULL && clonedNode != NULL) {//jabtak orignalnode null na hojaye and clonenode bhi null na hojaye tabtak
            // Map each original node to its corresponding cloned node
            oldToNew[originalNode] = clonedNode;//creating a mapping , relationship between original node and clonednode
            originalNode = originalNode->next;//updating both original and cloned node .
            clonedNode = clonedNode->next;
        }

        // Step 3: Set random pointers in the cloned list using the map
        originalNode = head;
        clonedNode = cloneHead;

        while (originalNode != NULL) {
            // Set the random pointer of the cloned node to the corresponding cloned random node
            clonedNode->random = oldToNew[originalNode->random];
            originalNode = originalNode->next;
            clonedNode = clonedNode->next;
        }

        // Return the head of the cloned list
        return cloneHead;
    }
};

int main() {
    // You can create and test your linked list here
    LinkedListClone lListClone;

    // Create a sample linked list (replace this with your own linked list creation logic)
    Node* originalList = new Node(1);
    originalList->next = new Node(2);
    originalList->next->next = new Node(3);

    // Set random pointers (replace this with your own logic)
    originalList->random = originalList->next->next;
    originalList->next->random = originalList;
    
    // Clone the linked list
    Node* clonedList = lListClone.cloneList(originalList);

    // Add your own code to print and verify the cloned list

    return 0;
}
