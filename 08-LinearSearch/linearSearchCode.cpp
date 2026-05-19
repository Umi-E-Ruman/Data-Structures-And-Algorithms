#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {64, 34, 25, 12, 22,99};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 12;

    int result = linearSearch(arr, n, target);

    if (result!= -1) {
        cout << "Found at index: " << result << endl;
    } else {
        cout << "Not found." << endl;
    }
    return 0;
}