#include <iostream>
#include <string>
using namespace std;

int main() {
    int num;
    cin >> num;
    string s;
    cin >> s;
    int counter = 0;
    for (int i = 0; i < num-1; i++){
        if(s[i] == s[i+1]){
            counter++;
        }
    }
    cout << counter;
    return 0;
}