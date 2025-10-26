#include <iostream>
using namespace std;
int main(){
    int tries;
    cin >> tries;
    int arr[tries] = {};
    for(int i = 0; i < tries; i++){
        int a, b;
        cin >> a >> b;
        if (a%b == 0){arr[i] = 0; continue;} 
        arr[i] = b - (a % b);
    }
    for(int num : arr){
        cout << num <<endl;
    }
    return 0;
}