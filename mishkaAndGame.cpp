#include <iostream>
using namespace std;

int main() {
    int tries = 0;
    cin >> tries;
    int score = 0;
    for(int i = 0; i < tries; i++){
        int num1 = 0;
        int num2 = 0;
        cin >> num1 >> num2;
        if (num1 > num2){
            score++;
        }else if(num2 > num1){
            score--;
        }
    }
    if (score == 0){
        cout << "Friendship is magic!^^";
    }else if(score > 0){
        cout << "Mishka";
    }else{
        cout << "Chris";
    }
    return 0;
}