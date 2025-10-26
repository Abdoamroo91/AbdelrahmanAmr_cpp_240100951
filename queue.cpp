#include <iostream>

using namespace std;

class Stack {
    static const int SIZE = 6;
    public:
    int top;
    int arr[SIZE];
    Stack() {
        top = -1;
    }
    void push(int num) {
        if (top == SIZE - 1) {
            cout << "Full can not push" << endl;
        }else{
            arr[++top] = num;
            cout << "Pushed: " << num << endl;
        }
        
    }
    int pop() {
        if (top == -1) {
            cout << "Empty can not pop" << endl;
            return -1;
        }else{
            int x = arr[top--];
            // delete(arr[x + 1]);
            cout << "Poped: " << x << endl;
            return x;
        }
    }
    int topValue() {
        if (top == -1) {
            return -1;
        }else{
            cout << "The top value is: " << arr[top] << endl;
            return arr[top];
        }
    }
};

class Queue {
private:
    
public:
    
};

int main() {
    Stack ss;
    ss.push(10);
    ss.push(20);
    ss.topValue();
    ss.pop();
    ss.pop();
    ss.pop();
    ss.push(30);
    ss.push(40);
    ss.push(50);
    ss.push(60);
    ss.push(70);
    ss.push(80);
    ss.push(90);
    ss.topValue();
    return 0;
}