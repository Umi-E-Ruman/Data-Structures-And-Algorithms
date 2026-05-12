#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    
    Node(int value) {
        data = value;
        next = nullptr;
    }
};

int main() {
    Node* head1 = nullptr;
    Node* tail1 = nullptr;
    Node* head2 = nullptr;
    Node* tail2 = nullptr;
    Node* head3 = nullptr;
    Node* tail3 = nullptr;
    
    int n1, n2, value;
    

    
    // Create first list
    cout << "Enter number of nodes for FIRST list: ";
    cin >> n1;
    cout << "Enter " << n1 << " values: ";
    for (int i = 0; i < n1; i++) {
        cin >> value;
        Node* newNode = new Node(value);
        
        if (head1 == nullptr) {
            head1 = newNode;
            tail1 = newNode;
        } else {
            tail1->next = newNode;
            tail1 = newNode;
        }
    }
    
    // Create second list
    cout << "\nEnter number of nodes for SECOND list: ";
    cin >> n2;
    cout << "Enter " << n2 << " values: ";
    for (int i = 0; i < n2; i++) {
        cin >> value;
        Node* newNode = new Node(value);
        
        if (head2 == nullptr) {
            head2 = newNode;
            tail2 = newNode;
        } else {
            tail2->next = newNode;
            tail2 = newNode;
        }
    }
    
    // Display first list
    cout << "\nFirst list: ";
    Node* temp = head1;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    
    // Display second list
    cout << "Second list: ";
    temp = head2;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    
    // Merge both lists into third list
    // Add all elements from first list
    temp = head1;
    while (temp != nullptr) {
        Node* newNode = new Node(temp->data);
        
        if (head3 == nullptr) {
            head3 = newNode;
            tail3 = newNode;
        } else {
            tail3->next = newNode;
            tail3 = newNode;
        }
        temp = temp->next;
    }
    
    // Add all elements from second list
    temp = head2;
    while (temp != nullptr) {
        Node* newNode = new Node(temp->data);
        tail3->next = newNode;
        tail3 = newNode;
        temp = temp->next;
    }
    
    // Display merged list
    cout << "\nMerged list (first + second): ";
    temp = head3;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    
    return 0;
}