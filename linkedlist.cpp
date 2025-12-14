#include <iostream>;
using namespace std;

class Linkedlist
{
    struct Node
    {
        int data;
        Node *next = NULL;
    };

public:
    Node *head;

    Linkedlist()
    {
        head = NULL;
    }
    void insertAtStart(int num)
    {
        Node *newNode;
        newNode->data = num;
        if (!head)
        {
            head = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }
    void insertAtEnd(int num)
    {
        Node *current;
        current = head;
        Node *newNode;
        newNode->data = num;
        while (current->next)
        {
            current = current->next;
        }
        current->next = newNode;
        newNode->next = NULL;
    }
    void insertAtPos(int num, int pos)
    {
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
    void insertBeforeValue(int num, int val)
    {
        Node *newNode;
        newNode->data = num;
        Node *pointer;
        pointer = head;
        while (pointer->next && pointer->next->data != val)
        {
            pointer = pointer->next;
        }
        newNode->next = pointer->next;
        pointer->next = newNode;
    }
    void deleteValue(int val)
    {
        if (head == NULL)
            return;

        if (head->data == val)
        {
            Node *temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node *current = head;
        while (current->next != NULL && current->next->data != val)
        {
            current = current->next;
        }

        if (current->next == NULL)
            return;

        Node *temp = current->next;
        current->next = current->next->next;
        delete temp;
    }

    void deleteFirst()
    {
        if (!head)
            return;
        Node *temp = head;
        head = head->next;
        delete temp;
    }

    void deleteLast()
    {
        if (!head)
            return;
        if (!head->next)
        {
            delete head;
            head = NULL;
            return;
        }
        Node *current = head;
        while (current->next->next)
        {
            current = current->next;
        }
        delete current->next;
        current->next = NULL;
    }

    void deleteAtPos(int pos){
        if (!head)
            return;
        if (pos == 1)
        {
            deleteFirst();
            return;
        }
        Node *current = head;
        int counter = 1;
        while (current->next && counter < pos - 1)
        {
            current = current->next;
            counter++;
        }
        if (!current->next)
            return;
        Node *temp = current->next;
        current->next = current->next->next;
        delete temp;
    }
    void concatenate(Node* head2){
        if (!head){
            head = head2;
            return;
        }
        Node* temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = head2;
    }
    void concatenate(Node* head2){
    if (!head){
        head = head2;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = head2;
}

};

int main()
{
    return 0;
}