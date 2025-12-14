#include <iostream>
using namespace std;
int sequentialSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key)
            return i;
    }
    return -1;
}
int main() {
    int arr[] = {7, 3, 9, 1, 5};

    cout << "Sequential Search for 9 -> " << sequentialSearch(arr, 5, 9) << endl;
    return 0;
}