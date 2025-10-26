#include <iostream>
using namespace std;

int main() {
    string word,revWord;
    cin >> word >> revWord;
    int counter = 0;
    for(int i = (word.size() - 1); i > -1; i--){
        if(word[i] == revWord[counter]){
            counter++;
        }
    }
    cout << ((counter == word.size() && word.size() == revWord.size())? "YES" : "NO");
    return 0;
}