#include <iostream>;
using namespace std;

int main(){
    int x = 10;
    int *y = &x;
    cout << &x << endl << y << endl << &y;
    return 0;
}