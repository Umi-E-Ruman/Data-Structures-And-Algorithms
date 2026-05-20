#include <iostream>
using namespace std;

void findAllWithCount(int arr[], int n, int target) {
    bool found = false;
    int comparisons = 0;

    for (int i = 0; i < n; i++) {
        comparisons++;
        if (arr[i] == target) {
            cout << "Found at index " << i << endl;
            found = true;
        }
    }
    cout << "Total comparisons made: " << comparisons << endl;
    if (!found) cout << "Not found." << endl;
}

int main() {
    int arr[] = {5, 3, 5, 9, 5, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 5;
    findAllWithCount(arr, n, target);
    return 0;
} 