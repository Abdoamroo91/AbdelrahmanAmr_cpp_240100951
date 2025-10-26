#include <iostream>
#include <string>
using namespace std;
int main(){
    int limak, bob;
    cin >> limak >> bob;
    int counter;
    while (bob >= limak){
        bob = bob * 2;
        limak = limak * 3;
        counter++;
    }
    cout<< counter;
    return 0;
}