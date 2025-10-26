#include <iostream>
#include <string>
using namespace std;

int main() {
    int numberOfWords;
    cin >> numberOfWords;
    while (numberOfWords--) {
        string word;
        cin >> word;
        
        if (word.length() <= 10) {
            cout << word << "\n";
        } else {
            cout << word[0] << word.length() - 2 << word[word.length() - 1] << "\n";
        }
    }
    return 0;
}