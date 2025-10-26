#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int items;
        cin >> items;
        vector<int> arr(items);

        int negtives = 0, zeros = 0;

        for (int i = 0; i < items; i++) {
            cin >> arr[i];
            if (arr[i] == -1) {
                negtives++;
            } else if (arr[i] == 0) {
                zeros++;
            }
        }
        int steps = zeros;
        if (negtives % 2 == 1) {
            steps += 2;
        }
        cout << steps << '\n';
    }
    return 0;
}
