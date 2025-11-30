#include <iostream>
using namespace std;

int main() {
    int tries;
    cin >> tries;

    for(int i = 0; i <tries; i++){
        string expression;
        cin >> expression;
        int a = expression[0] - '0';
        int b = expression[2] - '0';
        cout << a + b << endl;
    }

    return 0;
}
