#include <iostream>
using namespace std;
int main(){
    int numGames;
    cin >> numGames;
    string arr[numGames] = {};
    for(int i = 0; i < numGames; i++){
        int num;
        cin >> num;
        if(num % 2 == 0){
            arr[i] = "Sakurako";
        }else{
            arr[i] = "Kosuke";
        }
    }
    for (string item : arr){
        cout << item << endl;
    }
    return 0;
}