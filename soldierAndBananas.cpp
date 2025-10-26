#include <iostream>
#include <string>
#include <set>
using namespace std;

int soldierAndBananas(int k, int n, int w) {
    int total = k * (w * (w + 1) / 2);
    int borrow = total - n;
    if (borrow < 0) borrow = 0;
    return borrow;
}
int main() {
    int k, n, w;
    cin >> k >>n >>w;
    cout << soldierAndBananas(k, n, w);
    return 0;
}