#include <iostream>
using namespace std;

class DoublyLinkedList {

    struct Node {
        int data;
        Node *prev;
        Node *next;
    };

public:
    Node *head;
    Node *tail;
    DoublyLinkedList() {
        head = NULL;
        tail = NULL;
    }
    bool isEmpty() {
        return head == NULL;
    }
    void insertAtHead(int value) {
        Node *newNode = new Node;
        newNode->data = value;
        newNode->prev = NULL;
        newNode->next = head;

        if (isEmpty()) {
            head = tail = newNode;
        } else {
            head->prev = newNode;
            head = newNode;
        }
        cout << "Inserted at head: " << value << endl;
    }
    void insertAtTail(int value) {
        Node *newNode = new Node;
        newNode->data = value;
        newNode->next = NULL;
        newNode->prev = tail;
        if (isEmpty()) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
        cout << "Inserted at tail: " << value << endl;
    }
    void deleteHead() {
        if (isEmpty()) {
            cout << "List is empty, nothing to delete" << endl;
            return;
        }
        Node *temp = head;
        if (head == tail) { 
            head = tail = NULL;
        } else {
            head = head->next;
            head->prev = NULL;
        }
        cout << "Deleted from head: " << temp->data << endl;
        delete temp;
    }
    void deleteTail() {
        if (isEmpty()) {
            cout << "List is empty, nothing to delete" << endl;
            return;
        }
        Node *temp = tail;
        if (head == tail) { 
            head = tail = NULL;
        } else {
            tail = tail->prev;
            tail->next = NULL;
        }
        cout << "Deleted from tail: " << temp->data << endl;
        delete temp;
    }
};

int main() {
    DoublyLinkedList myList;
    myList.insertAtHead(10);
    myList.insertAtHead(20);
    myList.insertAtTail(30);
    myList.insertAtTail(40);
    myList.deleteHead();
    myList.deleteTail();
    
    return 0;
}
