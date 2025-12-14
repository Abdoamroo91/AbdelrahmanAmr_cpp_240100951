#include <iostream>;
using namespace std;

class Linkedlist{
    struct Node{
        int data;
        Node *next = NULL;
    };
public:
    Node *head;

    Linkedlist(){
        head = NULL;
    }
    void insertAtStart(int num){
        Node *newNode;
        newNode->data = num;
        if(head == NULL){
            head = newNode;
        }else{
            newNode->next = head;
            head = newNode;
        }
    }
        void insertAtEnd(int num){
        Node *current;
        current = head;
        Node *newNode;
        newNode->data = num;
        while (current->next != NULL){
            current = current->next;
        }
        current->next = newNode;
        newNode->next = NULL;
    }
    void insertAtPos(int num, int pos){
        Node *newNode;
        newNode->data = num;
        Node *pointer;
        pointer = head;
        int counter = 1;
        while (pointer->next && pos != counter)
        {
            pointer = pointer->next;
            counter++;
        }
        newNode->next = pointer;
        pointer->next = newNode;
    }
};