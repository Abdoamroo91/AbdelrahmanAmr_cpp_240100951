#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string word;
    cin >> word;

    int upper = 0, lower = 0;

    for (char letter : word) {
        if (islower(letter))
            lower++;
        else if (isupper(letter))
            upper++;
    }

    if (lower >= upper) {
        for (int i = 0; i < word.length(); i++)
            word[i] = tolower(word[i]);
    } else {
        for (int i = 0; i < word.length(); i++)
            word[i] = toupper(word[i]);
    }

    cout << word;
    return 0;
}