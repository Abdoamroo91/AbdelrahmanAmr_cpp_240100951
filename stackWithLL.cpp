#include <iostream>
using namespace std;

class Linkedlist{
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
    Linkedlist() {
        head = NULL;
    }

    void insertAtStart(int num) {
        Node *newNode = new Node(num);
        newNode->next = head;
        head = newNode;
    }

    int deleteFirst() {
        if (!head) {
            cout << "Stack is empty\n";
            return -1;
        }
        Node *temp = head;
        int value = temp->data;
        head = head->next;
        delete temp;
        return value;
    }

    bool isEmpty() {
        return head == NULL;
    }
};

class Stack {
private:
    Linkedlist list;

public:
    void push(int x) {
        list.insertAtStart(x);
    }

    int pop() {
        return list.deleteFirst();
    }

    bool isEmpty() {
        return list.isEmpty();
    }
};

int main() {
    Stack st;

    st.push(10);
    st.push(20);
    st.push(30);
    cout << st.pop() << endl;
    cout << st.pop() << endl;
    cout << st.pop() << endl;
    return 0;
}