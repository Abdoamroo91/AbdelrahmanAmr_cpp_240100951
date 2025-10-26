#include <iostream>
#include <string>
#include <set>
using namespace std;

string boyOrGirl(string username) {
    set<char> distinctChars;
    for (char letter : username) {
        distinctChars.insert(letter);
    }
    if (distinctChars.size() % 2 == 0) {
        return "CHAT WITH HER!";
    } else {
        return "IGNORE HIM!";
    }
}

int main() {
    string username;
    cin >> username;
    cout << boyOrGirl(username);
    return 0;
}
