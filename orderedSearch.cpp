#include <iostream>
using namespace std;
int orderedSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key)
            return i;
        if (arr[i] > key)
            return -1;
    }
    return -1;
}
int main(){
    int arr[] = {1, 3, 5, 7, 9};
    cout << "Ordered Search for 7 -> " << orderedSearch(arr, 5, 7) << endl;
    return 0;
}