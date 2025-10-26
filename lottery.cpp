#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    int bills = 0;
    
    bills += (num / 100);
    num %= 100;
    bills += (num / 20);
    num %= 20;
    bills += (num / 10);  
    num %= 10;
    bills += (num / 5);   
    num %= 5;
    bills += num;
    cout << bills;
    return 0;
}