#include <iostream>
using namespace std;

int main() {
    int tries,num;
    cin >> tries;
    for(int i = 0; i < tries; i++) {
        cin >> num;
        if (num % 3 == 0) 
            cout << "Second" << endl;
        else 
            cout << "First" << endl;
    }
    return 0;
}