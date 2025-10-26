#include <iostream>
using namespace std;

int main(){
    int rooms;
    cin >> rooms;
    int counter;
    for(int i = 0; i <rooms; i++){
        int ppl, capacity;
        cin >> ppl >> capacity;
        if ((capacity - ppl) >= 2) {
            counter ++;
        }
    }
    cout <<counter;
    return 0;
}