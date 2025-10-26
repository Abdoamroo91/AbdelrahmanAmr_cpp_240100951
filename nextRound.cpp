#include <iostream>
using namespace std;

int main() {
    int ppl, lowest;
    cin >> ppl >> lowest;

    int counter = 0;
    int minScore = 0;
    for (int i = 1; i <= ppl; i++) {
        int score;
        cin >> score;
        if (i == lowest) {
            minScore = score;
        }
        if (score > 0 && (i <= lowest)) {
            counter++;
        }
        else if (i > lowest && score >= minScore && score > 0) {
            counter++;
        }
    }
    cout << counter << endl;
    return 0;
}
