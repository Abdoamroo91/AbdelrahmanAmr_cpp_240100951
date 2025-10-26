#include <iostream>
using namespace std;

int main() {
    string word;
    cin >> word;
    string neWord;
    for(int i = (word.size() - 1); i > -1; i--){
        neWord += word[i];
    }
    cout << neWord;
}