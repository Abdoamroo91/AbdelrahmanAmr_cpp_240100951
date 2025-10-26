#include <iostream>
using namespace std;

int main(){
    int problems;
    cin >> problems;
    int counter;
    for (int i = 0; i < problems; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        if(x > 1 || x < 0 || y > 1 || y < 0 ||z > 1 || z < 0){
            break;
        }
        if (x + y + z >= 2) {
            counter++;
        }
    }
    cout << counter;
    return 0;
}