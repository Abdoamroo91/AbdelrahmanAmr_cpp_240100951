#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    int num;
    cin >> num;
    for(int i = 0; i < num; i++){
        string word;
        cin >> word;
        char arr[3] = {'y', 'e', 's'};
        int counter = 0;
        for(int i = 0; i < word.length(); i++){
            if(tolower(word[i]) == arr[i]){
                counter ++;
            }
        }
        if(counter == 3){
            cout << "YES" <<endl;
        }else{
            cout << "NO" <<endl;
        }
    }
}