#include <iostream>
using namespace std;

class CircularLinkedList{
    struct Node
    {
        int data;
        Node *next;
    };
    
public:
    Node *head;
    CircularLinkedList(){
        head = NULL;
    }
    void insertAtStart(int num){
        Node *newNode = new Node();
        newNode->data = num;
        if (!head){
            head = newNode;
            newNode->next = head;
            return;
        }
        Node *temp = head;
        while (temp->next != head)
            temp = temp->next;
        newNode->next = head;
        temp->next = newNode;
        head = newNode;
    }

    void insertAtEnd(int num){
        Node *newNode = new Node();
        newNode->data = num;
        if (!head)
        {
            head = newNode;
            newNode->next = head;
            return;
        }
        Node *temp = head;
        while (temp->next != head)
            temp = temp->next;
        temp->next = newNode;
        newNode->next = head;
    }

    void deleteFirst(){
        if (!head)
            return;
        if (head->next == head){
            delete head;
            head = NULL;
            return;
        }
        Node *temp = head;
        Node *last = head;
        while (last->next != head)
            last = last->next;
        head = head->next;
        last->next = head;
        delete temp;
    }
};
int main(){
    return 0;
}
