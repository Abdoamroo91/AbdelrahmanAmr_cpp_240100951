#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    int moves = 0;
    moves += (num / 5);
    num %= 5;
    moves += (num / 4);
    num %= 4;
    moves += (num / 3);
    num %= 3;
    moves += (num / 2);
    num %= 2;
    moves += (num / 1);
    num %= 1;
    cout << moves;
    return 0;
}