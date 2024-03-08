// Node Structure: A node in a linked list typically consists of two components:
// Data: It holds the actual value or data associated with the node.
// Next Pointer: It stores the memory address (reference) of the next node in the sequence.
// Head and Tail: The linked list is accessed through the head node, which points to the first node in the list. 
// The last node in the list points to NULL or nullptr, indicating the end of the list. This node is known as the tail node.


// #1 Single Linked List
#include<iostream>
using namespace std;

class Node {
    public: 
    int data;
    Node* next;
};
// insertion at head
void push(Node** head_ref, int new_data){
    Node* new_node = new Node();
    new_node -> data = new_data;
    new_node -> next = (*head_ref);
    (*head_ref) = new_node;
}
//insertion after a node
void insertAfter(Node* prev_node , int new_data){
    if(prev_node == NULL){
        cout <<"The given previous node cannot be NULL";
        return;
    }
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}
//insertion at the end
void append(Node** head_ref , int new_data){
    Node* new_node = new Node();
    Node* last = *head_ref;
    new_node->data = new_data;
    new_node->next = NULL;
    if(*head_ref == NULL){
        *head_ref = new_node;
        return;
    }

    while(last->next != NULL){
        last = last->next;
    }  

    last-> next = new_node;
    return;
}