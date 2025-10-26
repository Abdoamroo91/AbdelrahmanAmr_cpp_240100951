#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cin >> word;

    char vowels[6] = {'a', 'e', 'i', 'o', 'u', 'y'};
    string neWord = "";

    for (int i = 0; i < word.size(); i++) {
        char letter = tolower(word[i]);
        bool isVowel = false;
        for (int j = 0; j < sizeof(vowels); j++) {
            if (letter == vowels[j]) {
                isVowel = true;
                break;
            }
        }
        if (!isVowel) {
            neWord += '.';
            neWord += letter;
        }
    }
    cout << neWord;
    return 0;
}
