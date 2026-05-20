#include <iostream>
using namespace std;
void findAll(int arr[], int n, int target) {
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            cout << "Found at index " << i << endl;
            found = true;
        }
    }
    if (!found) cout << "Not found." << endl;
}



int main() {
    int arr[] = {5, 3, 5, 9, 5, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 5;
    findAll(arr,n,target);
    return 0; 
}  