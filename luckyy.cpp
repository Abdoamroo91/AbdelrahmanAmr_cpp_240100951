#include <iostream>
using namespace std;

int main() {
    int tries = 0;
    cin >> tries;

    for (int i = 0; i < tries; i++) {
        string numWord;
        cin >> numWord;
        int sum1 = 0, sum2 = 0;
        for (int j = 0; j < 6; j++) {
            if (j < 3)
                sum1 += numWord[j] - '0';
            else
                sum2 += numWord[j] - '0';
        }
        if (sum1 == sum2)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
