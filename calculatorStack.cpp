#include <iostream>
using namespace std;

class Stack {
public:
    int top;
    int size;
    int *arr;

    Stack(int s) {
        size = s;
        arr = new int[size];
        top = -1;
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == size - 1;
    }

    void push(int value) {
        if (isFull()) {
            cout << "stack overflow";
        } else {
            arr[++top] = value;
        }
    }

    int pop() {
        if (isEmpty()) {
            cout << "stack underflow";
            return -1;
        }
        return arr[top--];
    }

    int peek() {
        if (isEmpty()) {
            cout << "stack is empty";
            return -1;
        }
        return arr[top];
    }
};

int precedence(char op) {
    if (op == '*' || op == '/') return 2;
    if (op == '+' || op == '-') return 1;
    return 0;
}

string infixToPostfix(string exp) {
    Stack st(100);
    string result = "";

    for (int i = 0; i < exp.length(); i++) {
        char c = exp[i];
        if (c == ' ') continue;
        if (isdigit(c)) {
            result += c;
            result += " ";
        }

        else if (c == '(') {
            st.push(c);
        }
        else if (c == ')') {
            while (!st.isEmpty() && st.peek() != '(') {
                result += (char)st.pop();
                result += " ";
            }
            if (st.isEmpty()) {
                cout << "err" << endl;
                return "";
            }
            st.pop();
        }
        else {
            while (!st.isEmpty() && precedence(st.peek()) >= precedence(c)) {
                result += (char)st.pop();
                result += " ";
            }
            st.push(c);
        }
    }

    while (!st.isEmpty()) {
        if (st.peek() == '(') {
            cout << "err" << endl;
            return "";
        }
        result += (char)st.pop();
        result += " ";
    }
    return result;
}

int evaluatePostfix(string exp) {
    Stack st(100);
    for (int i = 0; i < exp.length(); i++) {
        char c = exp[i];
        if (c == ' ') continue;
        if (isdigit(c)) {
            st.push(c - '0');
        }
        else {
            if (st.top < 1) {
                cout << "invalid postfix" << endl;
                return -1;
            }
            int b = st.pop();
            int a = st.pop();
            int result;
            switch (c) {
                case '+':
                    result = a + b; break;
                case '-':
                    result = a - b; break;
                case '*':
                    result = a * b; break;
                case '/':
                    if (b == 0) {
                        cout << "division by zero err" << endl;
                        return -1;
                    }
                    result = a / b; 
                    break;
                default:
                    cout << "unknown operator" << endl;
                    return -1;
            }
            st.push(result);
        }
    }
    if (st.top != 0) {
        cout << "invalid postfix" << endl;
        return -1;
    }

    return st.pop();
}

int main() {
    string infix;

    cout << "Enter an infix expression: ";
    getline(cin, infix);

    string postfix = infixToPostfix(infix);

    if (postfix == "") {
        cout << "err" << endl;
        return 0;
    }

    cout << "Postfix: " << postfix << endl;
    int result = evaluatePostfix(postfix);
    cout << "Result: " << result << endl;
}