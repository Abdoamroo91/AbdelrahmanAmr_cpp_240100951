#include <iostream>
using namespace std;
int main(){
    string strNum;
    cin >> strNum;
    int counter;
    for(char n : strNum){
        if(n == '7' || n == '4'){
            counter++;
        }
    }
    if (counter == 7 || counter == 4){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}