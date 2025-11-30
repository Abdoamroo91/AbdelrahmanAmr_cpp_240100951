#include <iostream>
using namespace std;
int main(){
    int tries;
    string word = "codeforces";
    cin >> tries;
    for (int i = 0; i < tries; i++){
        int counter = 0;
        string neWord;
        cin >> neWord;
        for (int j = 0; j < 10; j++){
            if(word[j] != neWord[j]){
                counter++;
            }
        }
        cout << counter << endl;
    }
    return 0;
}
