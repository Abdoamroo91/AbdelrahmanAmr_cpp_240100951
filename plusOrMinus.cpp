#include <iostream>
using namespace std;
int main() {
    int tries = 0;
    cin >> tries;
    for (int i = 0; i < tries; i++){
        int num1 = 0;
        int num2 = 0;
        int num3 = 0;
        cin >> num1 >> num2 >> num3;
        if(num3 == (num1 + num2)){
            cout << '+' << endl;
        }else{
            cout << '-' << endl;
        }
    }
    return 0;
}