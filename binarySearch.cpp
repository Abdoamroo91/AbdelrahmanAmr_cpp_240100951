#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int key){
    int low = 0;
    int high = size - 1;

    while (low <= high){
        int mid = (low + high) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
int main(){
    int arr[] = {1, 3, 5, 7, 9};
    cout << "Binary Search for 7 -> " << binarySearch(arr, 5, 7) << endl;
    return 0;
}