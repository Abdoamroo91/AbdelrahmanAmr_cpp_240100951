#include <iostream>;
using namespace std;

class stack{
    int *arr;
    int size;
public:
    int top;
    stack(int s) {
        top = -1;
        size = s;
        arr = new int[size];
        cout << "Stack created with size " << size << endl;
    }
    
    void push(int num) {
        if (top == size - 1) {
            cout << "Full — cannot push " << num << endl;
        } else {
            arr[++top] = num;
            cout << "Pushed: " << num << endl;
        }
    }

    int pop() {
        if (top == -1) {
            cout << "Empty — cannot pop" << endl;
            return -1;
        } else {
            int x = arr[top--];
            cout << "Popped: " << x << endl;
            return x;
        }
    }

    int topValue() {
        if (top == -1) {
            cout << "Stack is empty!" << endl;
            return -1;
        } else {
            cout << "The top value is: " << arr[top] << endl;
            return arr[top];
        }
    }
};
int main() {
    int userSize;
    cout << "Enter the stack size: ";
    cin >> userSize;
    stack st(userSize);
    st.push(10);
    st.push(20);
    st.push(30);
    st.pop();
    st.topValue();
}