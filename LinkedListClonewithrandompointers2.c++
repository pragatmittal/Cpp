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
