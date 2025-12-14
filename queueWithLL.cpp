#include <iostream>
using namespace std;

class Linkedlist
{
    struct Node {
        int data;
        Node *next;
        Node(int d) {
            data = d;
            next = NULL;
        }
    };

public:
    Node *head;
    Node *tail;

    Linkedlist() {
        head = NULL;
        tail = NULL;
    }

    void insertAtEnd(int num) {
        Node *newNode = new Node(num);

        if (!head) {
            head = tail = newNode;
            return;
        }

        tail->next = newNode;
        tail = newNode;
    }

    int deleteFirst() {
        if (!head) {
            cout << "Queue is empty\n";
            return -1;
        }
        Node *temp = head;
        int value = temp->data;

        head = head->next;
        if (!head) tail = NULL;

        delete temp;
        return value;
    }

    bool isEmpty() {
        return head == NULL;
    }
};

class Queue {
private:
    Linkedlist list;

public:
    void enqueue(int x) {
        list.insertAtEnd(x);
    }

    int dequeue() {
        return list.deleteFirst();
    }

    bool isEmpty() {
        return list.isEmpty();
    }
};

int main() {
    Queue q;

    q.enqueue(5);
    q.enqueue(10);
    q.enqueue(15);

    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;

    return 0;
}
