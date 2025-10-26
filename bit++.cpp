#include <iostream>
#include <string>
using namespace std;

int main() {
    int tries;
    int counter = 0;
    cin >> tries;
    for (int t = 0; t < tries; t++) {
        string word;
        cin >> word;
        if(word[1] == '+'){
            counter++;
        }else{
            counter--;
        }
    }
    cout << counter;
    return 0;
}