#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

Node* reverseList(Node* head) {
    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;

    while(curr != NULL) {
        next = curr->next;  
    }
    return prev; // prev is new head
}

void printList(Node* head) {
    while(head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    cout << "Original: ";
    printList(head);      
    head = reverseList(head);

    cout << "Reversed: ";
    printList(head);        
}

Node* reverseRecursive(Node* head) {
    // Base case: empty list or last node
    if(head == NULL || head->next == NULL)
        return head;

    // Reverse rest of list
    Node* newHead = reverseRecursive(head->next);

    // Fix current node
    head->next->next = head;
    head->next = NULL;

    return newHead;
}


