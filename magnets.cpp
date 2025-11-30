#include <iostream>
using namespace std;

int main() {
    int magnets;
    cin >> magnets;

    string prev, cur;
    cin >> prev;

    int groups = 1;

    for (int i = 1; i < magnets; i++) {
        cin >> cur;
        if (cur != prev) {
            groups++;
        }
        prev = cur;
    }

    cout << groups;
    return 0;
}
