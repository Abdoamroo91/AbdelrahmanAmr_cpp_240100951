#include <iostream>
using namespace std;

int main() {
    int numOfDrinks;
    cin >> numOfDrinks;
    double sum = 0;

    for (int i = 0; i < numOfDrinks; i++) {
        double p;
        cin >> p;
        sum += p;
    }

    double res = sum / numOfDrinks;

    cout << res;
    return 0;
}
