#include <iostream>
using namespace std;

int main() {
    int events;
    cin >> events;
    int crimes = 0;
    int officers = 0; 

    for (int i = 0; i < events; i++) {
        int num;
        cin >> num;
        if (num == -1) {
            if (officers > 0) {
                officers--;
            } else {
                crimes++;
            }
        } else {
            officers += num;
        }
    }
    cout << crimes << endl;
    return 0;
}
